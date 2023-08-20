#include "myl.h"

#define BUFF 20
#define PRECISION 6
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int printStr(char *str)
{
	int i = 0;
	while (str[i] != '\0') i++; // getting length of string

	// printing the string
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		: "S"(str), "d"(i));

	return i;
}

int readInt(int *n)
{

	char buff[BUFF];
	int i = 0, length;

	// reading input into buff
	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(length)
		: "S"(buff), "d"(BUFF));

	// if input length is invalid, return error
	if (length > BUFF || length <= 0) return ERR;

	int dig; 
	*n = 0;

	if (buff[0] == '-') i=1; // in case number is negative, parsing starts from index 1 instead of 0

	// parsing the string input and converting it into int, digit by digit
	while (buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t') {
		if (buff[i] < '0' || buff[i] > '9') return ERR; // returning error in case of invalid character

		dig = buff[i] - '0';

		// returning error in case of overflow 		
		if( (buff[0]=='-' && -(*n * 10 * 1L + dig) < INT_MIN) || 
			(buff[0]!='-' &&  (*n * 10 * 1L + dig) > INT_MAX)) {return ERR;} 

		*n = *n * 10 + dig;

		i++;
	}
	
	if (buff[0] == '-') *n = -(*n); // changing sign if number is negative

	return OK; // if it has reached here, it means there were no errors, so OK is returned
}

int printInt(int n)
{
	char buff[BUFF], zero = '0';
	int i = 0, start, end, bytes, ret_val;

	if (n == 0) buff[i++] = zero; // if n is 0, then buff is just '0' 
	else
	{
		// if n is negative, make it positive and add '-' to buff
		if (n < 0)
		{
			buff[i++] = '-';
			n = -n;
		}

		// storing the digits as characters in buff one by one
		while (n)
		{
			int dig = n % 10;
			buff[i++] = (char)(zero + dig);
			n /= 10;
		}

		// starting index for reversing the number
		if (buff[0] == '-') start = 1;
		else start = 0;
		
		end = i - 1; // ending index 

		// reversing the number stored in buff
		while (start < end)
		{
			char temp = buff[start];
			buff[start++] = buff[end];
			buff[end--] = temp;
		}
	}

	buff[i] = '\0'; // converting buff to string with null character
	bytes = i + 1; // number of bytes to be printed

	// printing the string in buff
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(ret_val)
		: "S"(buff), "d"(bytes));

	// checking if all bytes are printed and accordingly returning ERR or OK
	if (ret_val == bytes) return OK;
	else return ERR;
}

int readFlt(float *n)
{	
	char buff[BUFF];
	int i = 0, length;

	// reading input into buff
	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(length)
		: "S"(buff), "d"(BUFF));

	// if input length is invalid, return error
	if (length > BUFF || length <= 0) return ERR;


	float dig; 
	*n = 0; 

	// similar to readInt, parsing of string input is done
	if (buff[0] == '-') i=1; 
	while (buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t') {
		if (buff[i] == '.') break;
		else{
			if (buff[i] < '0' || buff[i] > '9') return ERR;

			dig = (float)(buff[i] - '0');

			// returning error in case of overflow 		
			if( (buff[0]=='-' && -(*n * 10 * 1L + dig) < INT_MIN) || 
				(buff[0]!='-' &&  (*n * 10 * 1L + dig) > INT_MAX)) {return ERR;} 

			*n = *n * 10 + dig;

			i++;
		}
	}

	i++;

	// now parse the fractional part of the number
	float dec = 1; // to control the decimal 
	int prec = 0; // to control the precision
	while (prec < PRECISION && buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t' && buff[i] != '\0')   {
		dig = (float)(buff[i] - '0');
		dec *= 10;
		*n = *n + (float)dig/(float)dec;
		i++;
		prec++;
	}

	if (buff[0] == '-')
		*n = -(*n);

	return OK; // if it has reached here, it means there were no errors, so OK is returned
}

int printFlt(float n)
{
	char buff[BUFF], zero = '0';
	int i=0, k=0, start, end, bytes, ret_val;

	if (n == 0) buff[i++] = zero; // if n is 0, then buff is just '0' 
	else
	{	
		// if n is negative, make it positive and add '-' to buff
		if (n < 0)
		{
			buff[i++] = '-';
			n = -n;
		}

		// finding integer part and float part of n
		int int_part = (int)n;
		float float_part = n - (float)int_part;

		// storing the digits as characters in buff one by one, similar to printInt
		while (int_part)
		{
			int dig = int_part % 10;
			buff[i++] = (char)(zero + dig);
			int_part /= 10;
		}

		// reversing the string, similar to printInt
		if (buff[0] == '-') start = 1;
		else start = 0;
		
		end = i - 1; // ending index 

		// reversing the number stored in buff
		while (start < end)
		{
			char temp = buff[start];
			buff[start++] = buff[end];
			buff[end--] = temp;
		}

		buff[i++] = '.'; // adding decimal point after integer part

		// storing the float part in buff, digit by digit, upto PRECISIOn (=6) decimal places
		for (k=0; k<PRECISION; k++){
			float_part *= 10.0;
			int dig = (int)float_part;
			buff[i++] = (char)(zero + dig);
			float_part -= (float)dig;
		}
	}


	buff[i] = '\0'; // converting buff to string with null character
	bytes = i + 1; // number of bytes to be printed

	// printing the string in buff
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(ret_val)
		: "S"(buff), "d"(bytes));

	// checking if all bytes are printed and accordingly returning ERR or OK
	if (ret_val == bytes) return OK;
	else return ERR;
}
