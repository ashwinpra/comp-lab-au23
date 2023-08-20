#include "myl.h"
#include <stdio.h>

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

int printInt(int n)
{
	char buff[BUFF], zero = '0';
	int i = 0, start, end, bytes, ret_val;

	if (n == 0) buff[i++] = zero;
	else
	{
		// if n is negative, make it positive and add '-' to buff
		if (n < 0)
		{
			buff[i++] = '-';
			n = -n;
		}

		// storing the digits in buff one by one
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

	// converting to string with null character
	buff[i] = '\0';

	// number of bytes to be printed
	bytes = i + 1;

	// printing the string in buff
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(ret_val)
		: "S"(buff), "d"(bytes));

	// checking if all bytes are printed
	if (ret_val == bytes) return OK;
	else return ERR;
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

	// while (buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t') i++;
	// i--; 

	int dig;
	*n=0;
	if (buff[0] == '-') i=1;
	while (buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t') {
		if (buff[i] < '0' || buff[i] > '9') return ERR;

		dig = buff[i] - '0';
		*n = *n * 10 + dig;
		if (*n > INT_MAX || *n < INT_MIN) return ERR;

		i++;
	}

	// int j = 0, k, dig;
	// if (buff[0] == '-') j = 1;
	// *n = 0;

	// for (k = j; k <= i; k++)
	// {	
	// 	if (buff[k] < '0' || buff[k] > '9') return ERR;

	// 	dig = buff[k] - '0';
	// 	*n = *n * 10 + dig;
	// 	if (*n > INT_MAX || *n < INT_MIN) return ERR;
	// }
	
	if (buff[0] == '-') *n = -(*n);

	return OK;
}

int readFlt(float *n)
{
	char buff[BUFF];
	int i = 0, length;
	int float_idx = 0;

	__asm__ __volatile__(
		"movl $0, %%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(length)
		: "S"(buff), "d"(BUFF));

	if (length > BUFF || length <= 0) return ERR;

	while (buff[i] != '\n' && buff[i] != ' ' && buff[i] != '\t') i++;
	i--;

	int j = 0, k, dig;
	if (buff[0] == '-') j = 1;

	*n = 0;
	for (k = j; k <= i; k++)
	{	
		if (buff[k] == '.')
		{
			float_idx = k;
			continue;
		}
		else{
			if (buff[k] < '0' || buff[k] > '9') return ERR;
		}

		dig = buff[k] - '0';
		*n = *n * 10 + dig;
	}

	if (buff[0] == '-')
		*n = -(*n);

	if (float_idx)
	{
		float_idx = i - float_idx;
		float div = 1.0;
		while (float_idx--)
		{
			div *= 10.0;
		}
		*n /= div;
	}

	return OK;
}

int printFlt(float n)
{
	char buff[BUFF], zero = '0';
	int i = 0, j, k, bytes;
	int ret_val;

	if (n == 0)
		buff[i++] = zero;
	else
	{
		if (n < 0)
		{
			buff[i++] = '-';
			n = -n;
		}
		int int_part = (int)n;
		float float_part = n - (float)int_part;
		while (int_part)
		{
			int dig = int_part % 10;
			buff[i++] = (char)(zero + dig);
			int_part /= 10;
		}
		if (buff[0] == '-')
			j = 1;
		else
			j = 0;

		k = i - 1;

		while (j < k)
		{
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}


		buff[i++] = '.';

		for (k=0; k<PRECISION; k++){
			float_part *= 10.0;
			int dig = (int)float_part;
			buff[i++] = (char)(zero + dig);
			float_part -= (float)dig;
		}
	}

	buff[i] = '\n';
	bytes = i + 1;

	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		: "=a"(ret_val)
		: "S"(buff), "d"(bytes));

	if (ret_val == bytes)
		return OK;
	else
		return ERR;
}
