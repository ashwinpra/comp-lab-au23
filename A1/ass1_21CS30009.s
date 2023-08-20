	.file	"code.c" 				# Indicating that this assembly file is associated to "code.c" file
	.text 							# This depicts the start of the code section
	.globl	calculateFrequency 		# Declaring "calculateFrequency" as global, so that it can be accessed in other parts of the program 
	.type	calculateFrequency, @function 			# Declaring "calculateFrequency" as a function

calculateFrequency: 				# Start of the function "calculateFrequency"
.LFB0:                        		# Local function label used by the assembler (Local Function Begin 0)
	.cfi_startproc   				# Indicating the start of the function
	endbr64                   		# "End branch 64 bit" - this is used to detect invalid jumps. The presence of this line at the beginning of the function tells the 	
									# Processor that this is a valid and intended jump
	pushq	%rbp               		# To save the old value of the base pointer (saves caller's base pointer)
	.cfi_def_cfa_offset 16			# CFA - Canonical Frame Address. The offset of CFA is set to 16 bytes, ie. the offset between current stack pointer and 	
									# previous base pointer 
	.cfi_offset 6, -16				# 6 represents %rbp. This command stores %rbp at an offset of -16 from the current CFA
	movq	%rsp, %rbp				# Moves current stack pointer (rsp) to base pointer
	.cfi_def_cfa_register 6			# Specifies that CFA is %rbp, ie the current base pointer
	movq	%rdi, -24(%rbp)			# First function argument (%rdi) -> arr1[] is moved to -24(%rbp), ie M[rbp-24]
	movl	%esi, -28(%rbp)			# Second function argument (%esi) -> n is moved to -28(%rbp), ie M[rbp-28]
	movq	%rdx, -40(%rbp)			# Third function argument (%rdx) -> fr1[] is moved to -40(%rbp), ie M[rbp-40]
	movl	$0, -12(%rbp)			# M[rbp-12] is set to 0 -> i = 0 in initialization of the for loop
	jmp	.L2							# Unconditional jump to .L2 - start of the for loop

.L7:								# If for loop condition is true, the following is executed:
	movl	$1, -4(%rbp)			# M[rbp-4] is set to 1 -> ctr = 1 
	movl	-12(%rbp), %eax			# i (M[rbp-12]) is moved to eax
	addl	$1, %eax				# eax is incremented by 1 -> i+1 -> which is gonna be the initial value of j 
	movl	%eax, -8(%rbp)			# i+1 to M[rbp-8] -> j = i+1
	jmp	.L3							# Unconditional jump to .L3 - start of the inner for loop

.L5:								# If the inner for loop condition is true, the following is executed:
	movl	-12(%rbp), %eax			# i (M[rbp-12]) is moved to eax
	cltq							# Converting %eax to %rax -> 32 bit to 64 bit	
	leaq	0(,%rax,4), %rdx		# lea -> load effective address. The address (%rax)*4 is loaded into %rdx - i (rax) is the counter and it is multiplied by 4  
									# as it is used to reference integer array where one integer takes up 4 bytes
	movq	-24(%rbp), %rax			# arr1[] (M[rbp-24]) is moved to rax
	addq	%rdx, %rax				# Adds the address in rdx (offset) to rax (base address of arr1[]), basically to access arr1[i]
	movl	(%rax), %edx			# The value at the address in rax -> arr1[i] is moved to edx
	movl	-8(%rbp), %eax			# j (M[rbp-8]) is moved to eax

	# Same procedure as above is repeated to get arr1[j]
	cltq							
	leaq	0(,%rax,4), %rcx	
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax			# arr1[j] is loaded into %eax
	cmpl	%eax, %edx				# Comparing arr1[i] and arr1[j]
	jne	.L4							# If arr1[i] != arr1[j], jump to .L4 -> checking the "if" condition: if(arr1[i] == arr1[j]) (it is violated)

	# If the "if" condition is true, the following is executed:
	addl	$1, -4(%rbp)			# ctr (M[rbp-4]) is incremented by 1 -> ctr++

	# Same procedure as above is repeated to get fr1[j]
	movl	-8(%rbp), %eax			
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax				# fr1[j] is loaded into %rax
	movl	$0, (%rax)				# fr1[j] is set to 0 -> fr1[j] = 0

.L4:
	addl	$1, -8(%rbp)			# j(M[rbp-8) is incremented by 1 -> j++ in the inner for loop

.L3:								# Start of the for loop in calculateFrequency function
	movl	-8(%rbp), %eax			# Moving j (M[rbp-8]) to eax
	cmpl	-28(%rbp), %eax			# Comparing n (M[rbp-28]) with j (eax)
	jl	.L5							# Jump to L5 if j < n

	# If j >= n, the inner for loop is terminated and the following is executed:
	movl	-12(%rbp), %eax			# Moving i (M[rbp-12]) to eax
	cltq							# Converting %eax to %rax -> 32 bit to 64 bit
	leaq	0(,%rax,4), %rdx		# lea -> load effective address. The address (%rax)*4 is loaded into %rdx - i (rax) is the counter and it is multiplied by 4  
									# as it is used to reference integer array where one integer takes up 4 bytes
	movq	-40(%rbp), %rax			# fr1[] (M[rbp-40]) is moved to rax
	addq	%rdx, %rax				# Adds the address in rdx (offset) to rax (base address of fr1[]), basically to access fr1[i]
	movl	(%rax), %eax			# The value at the address in rax -> fr1[i] is moved to eax
	testl	%eax, %eax				# Tests if eax (fr1[]) is 0
	je	.L6							# If eax is 0, jump to .L6 -> Checking the "if" condition: if(fr1[i] != 0)

	# If the "if" condition is true, the following is executed:

	# Same procedure as above is repeated to get fr1[i]
	movl	-12(%rbp), %eax			
	cltq							
	leaq	0(,%rax,4), %rdx	
	movq	-40(%rbp), %rax			
	addq	%rax, %rdx				# fr1[i] is loaded into %rdx

	movl	-4(%rbp), %eax			# ctr (M[rbp-4]) is moved to eax
	movl	%eax, (%rdx)			# ctr is moved to the address in rdx -> fr1[i] = ctr

.L6:								# If the above "if" condition is false, the following is executed:
	addl	$1, -12(%rbp)			# i (M[rbp-12]) is incremented by 1 -> i++

.L2: 								# Start of the for loop in calculateFrequency function
	movl	-12(%rbp), %eax 		# Moving i (M[rbp-12]) is moved to eax
	cmpl	-28(%rbp), %eax			# Comparing n (M[rbp-28]) with i (eax)
	jl	.L7							# Jump to L7 if i < n 
	# If i >= n, the for loop is terminated and the following is executed:
	nop								# No operation, used for alignment
	nop								# (same as above)
	popq	%rbp					# Restores previous value of base pointer, undoing the setup of stack frame for function
	.cfi_def_cfa 7, 8				# 7 represents %rsp. Indicates that %rsp + 8 is CFA
	ret								# Returns to the calling function, by popping the return address from the stack	
	.cfi_endproc					# Indicates end of the procedure

.LFE0: 													# End of the function with function label LFB0 (Local Function End 0)
	.size	calculateFrequency, .-calculateFrequency 	# Gives the size of the function calculateFrequency


	.section	.rodata				# Denotes the start of the read-only data section - used for constants

.LC0: 								# Local constant label used by the assembler (Local Constant 0)
	.string	"Element\tFrequency"	# String to be printed (will be used to print title in function "printArrayWithFrequency")

.LC1:								# Local constant label used by the assembler (Local Constant 1)
	.string	"%d\t%d\n"				# String to be printed (will be used to print elements and their frequencies in function "printArrayWithFrequency")

	.text 							# Denotes the start of the code section
	.globl	printArrayWithFrequency # Declaring "printArrayWithFrequency" as global, so that it can be accessed in other parts of the program
	.type	printArrayWithFrequency, @function	# Declaring "printArrayWithFrequency" as a function
printArrayWithFrequency:			# Start of the function "printArrayWithFrequency"

.LFB1:								# Local function label used by the assembler (Local Function Begin 1)

	# The next 7 lines are the same as explained in calculateFrequency function
	.cfi_startproc					
	endbr64							
	pushq	%rbp					
	.cfi_def_cfa_offset 16			
	.cfi_offset 6, -16				
	movq	%rsp, %rbp				
	.cfi_def_cfa_register 6			
	subq	$48, %rsp				# Allocates 48 bytes of memory on the stack - for local variables
	movq	%rdi, -24(%rbp)			# First function argument (%rdi) -> arr1[] is moved to -24(%rbp), ie M[rbp-24]
	movq	%rsi, -32(%rbp)			# Second function argument (%rsi) -> fr1[] is moved to -32(%rbp), ie M[rbp-32]
	movl	%edx, -36(%rbp)			# Third function argument (%edx) -> n is moved to -36(%rbp), ie M[rbp-36]
	leaq	.LC0(%rip), %rdi		# Loads the address of the string "Element\tFrequency" (.LC0) into %rdi -> 1st argument for puts, 
									# which is printed at the beginning of the function
	call	puts@PLT				# "puts" function is called to print the above string
	movl	$0, -4(%rbp)			# M[rbp-4] is set to 0 -> i = 0 in initialization of the for loop
	jmp	.L9							# Unconditional jump to .L9 - start of the for loop

.L11:								# If for loop condition is true, then the following is executed:
	movl	-4(%rbp), %eax			# Moving i (M[rbp-4]) to %eax
	cltq							# Converting %eax to %rax
	leaq	0(,%rax,4), %rdx		# lea -> load effective address. The address (%rax)*4 is loaded into %rdx - i (rax) is the counter and it is multiplied by 4  
									# as it is used to reference integer array where one integer takes up 4 bytes
	movq	-32(%rbp), %rax			# M[rbp-32] -> fr1[] is loaded into rax
	addq	%rdx, %rax				# adds the address in rdx (offset) to rax (base address of arr1[]), basically to access arr1[i]
	movl	(%rax), %eax			# Loads the calculated value fr1[i] into eac
	testl	%eax, %eax				# Tests whether fr1[i] is equal to 0 ("if" condition within the for loop -> fr1[i] ! = 0
	je	.L10						# If it is equal to 0 ("if" condition violated), it jumps to .L10

	# The same lines as above are repeated to access fr1[i] and arr1[i] and print them
	movl	-4(%rbp), %eax			
	cltq							
	leaq	0(,%rax,4), %rdx		
	movq	-32(%rbp), %rax			
	addq	%rdx, %rax    			
	movl	(%rax), %edx			# fr1[i] is loaded into %edx

	movl	-4(%rbp), %eax			
	cltq							
	leaq	0(,%rax,4), %rcx		
	movq	-24(%rbp), %rax			
	addq	%rcx, %rax					
	movl	(%rax), %eax			# arr1[i] is loaded into %eax

	movl	%eax, %esi				# Moving arr1[i] to %esi - 2nd argument to printf
	leaq	.LC1(%rip), %rdi		# Loads the address of the string "%d\t%d" (.LC1) into %rdi -> 1st argument to printf, which is printed inside 
									# the loop, for arr1[i] and fr1[i]
	movl	$0, %eax				# Moving 0 to %eax -> return value of printf
	call	printf@PLT				# "printf" function is called to print the above string

.L10:								# i is incremented here
	addl	$1, -4(%rbp)			# i (M[rbp-4]) is incremented by 1 - i++ in for loop
	
.L9:								# Condition of the for loop is checked here 
	movl	-4(%rbp), %eax 			# Moving i (M[rbp-4]) to %eax
	cmpl	-36(%rbp), %eax 		# Comparing n (M[rbp-36]) with i (eax)
	jl	.L11 						# If i < n, jump to .L11 (checking loop condition)
	# If i >= n, the for loop is terminated and the following is executed:
	nop								# No operation, used for alignment
	nop								# (same as above)
	leave							# Deallocates the stack frame, by moving %rbp to %rsp, and then popping the old value of %rbp
	.cfi_def_cfa 7, 8				# 7 represents %rsp. Indicates that %rsp + 8 is CFA
	ret								# Returns to the calling function, by popping the return address from the stack	
	.cfi_endproc					# Indicates end of the procedure

.LFE1:																# Indicates end of the function
	.size	printArrayWithFrequency, .-printArrayWithFrequency		# Gives the size of the function

	.section	.rodata				# Indicates start of the read-only data section
	.align 8						# Aligns the next instruction on a byte boundary

.LC2:																	# String printed in the beginning of the program		
	.string	"\n\nCount frequency of each integer element of an array:"	# Value of the string
	.align 8															# Aligns the next instruction on a byte boundary

.LC3:																	# String printed as a separator between  input and output
	.string	"------------------------------------------------"			# Value of the string
	.align 8															# Aligns the next instruction on a byte boundary

.LC4:																	# String printed to prompt user to input number of elements in the array
	.string	"Input the number of elements to be stored in the array :" 	# Value of the string

.LC5:																	# String to scan user input
	.string	"%d"														# Value of the string
	.align 8															# Aligns the next instruction on a byte boundary

.LC6:																	# String printed to prompt user to input elements of the array
	.string	"Enter each elements separated by space: "					# Value of the string

	.text							# Indicates start of the text section		
	.globl	main					# Declaring "main" as global, so that it can be accessed in other parts of the program 
	.type	main, @function			# Declaring "main" as a function
main:								# Start of the main function
.LFB2:								# Local function label used by the assembler (Local Function Begin 2)
	# The next 7 lines are the same as explained in calculateFrequency function
	.cfi_startproc					
	endbr64							
	pushq	%rbp					
	.cfi_def_cfa_offset 16			
	.cfi_offset 6, -16				
	movq	%rsp, %rbp				
	.cfi_def_cfa_register 6			
	subq	$832, %rsp				# Allocates 832 bytes of memory on the stack - for local variables arr1[100], fr1[100], n, i
	movq	%fs:40, %rax			# This line and the next two lines are used to protect against buffer overflow
	movq	%rax, -8(%rbp)			
	xorl	%eax, %eax
	leaq	.LC2(%rip), %rdi		# Loads the address of the string "\n\nCount frequency of each integer element of an array:" (.LC2) into %rdi -> 1st argument to puts
	call	puts@PLT				# "puts" function is called to print the above string
	leaq	.LC3(%rip), %rdi		# Loads the address of the string "------------------------------------------------" (.LC3) into %rdi -> 1st argument to puts
	call	puts@PLT				# "puts" function is called to print the above string
	leaq	.LC4(%rip), %rdi		# Loads the address of the string "Input the number of elements to be stored in the array :" (.LC4) into %rdi -> 
									# 1st argument to printf
	movl	$0, %eax				# Moving 0 to %eax -> return value of printf
	call	printf@PLT				# "printf" function is called to print the above string
	leaq	-828(%rbp), %rax		# Moving n (M[rbp-828]) to %rax
	movq	%rax, %rsi				# Loading the value of %rax -> n, to %rsi -> 2nd argument to scanf
	leaq	.LC5(%rip), %rdi		# Loads the address of the string "%d" (.LC5) into %rdi -> 1st argument to scanf
	movl	$0, %eax				# Moving 0 to %eax -> return value of scanf
	call	__isoc99_scanf@PLT		# "scanf" function is called to scan the user input
	leaq	.LC6(%rip), %rdi		# Loads the address of the string "Enter each elements separated by space: " (.LC6) into %rdi -> 
									# 1st argument to printf
	movl	$0, %eax				# Moving 0 to %eax -> return value of printf
	call	printf@PLT				# "printf" function is called to print the above string
	movl	$0, -824(%rbp)			# Moving 0 to -824(%rbp) -> i
	jmp	.L13						# Unconditional jump to .L13 - start of the for loop

.L14:								# Start of the first for loop in main
	leaq	-816(%rbp), %rax		# Moving address of arr1[0] (M[rbp-816]) to %rax
	movl	-824(%rbp), %edx		# Moving i (M[rbp-824]) to %edx
	movslq	%edx, %rdx				# Converting %edx to %rdx -> 32 bit to 64 bit	
	salq	$2, %rdx				# Does left shift by 2 bits -> %rdx = %rdx * 4, since it is for an integer array, each element is 4 bytes
	addq	%rdx, %rax				# Adding rdx to rax, to get the address of arr1[i]
	movq	%rax, %rsi				# Moving the address of arr1[i] to %rsi -> 2nd argument to scanf
	leaq	.LC5(%rip), %rdi		# Loads the address of the string "%d" (.LC5) into %rdi -> 1st argument to scanf
	movl	$0, %eax				# Moving 0 to %eax -> return value of scanf
	call	__isoc99_scanf@PLT		# "scanf" function is called to scan the user input
	addl	$1, -824(%rbp)			# Incrementing i (M[rbp-824]) by 1 -> i++

.L13:								# Condition of the for loop is checked here
	movl	-828(%rbp), %eax		# Moving n (M[rbp-828]) to %eax
	cmpl	%eax, -824(%rbp)		# Checking if i < n (M[rbp-824] < M[rbp-828])
	jl	.L14						# If true, jump to .L14 (checking loop condition)

	# If false, continue to the next line, which is another for loop
	movl	$0, -820(%rbp)			# move 0 to M[rbp-820] -> i for the second "for" loop (will be referred to as "i2" to avoid confusion)
	jmp	.L15						# Unconditional jump to .L15  -> start of the second for loop

.L16:								# Start of the second for loop in main
	movl	-820(%rbp), %eax		# Moving i2 (M[rbp-820]) to %eax
	cltq							# Converting %eax to %rax -> 32 bit to 64 bit
	movl	$-1, -416(%rbp,%rax,4)	# Moving -1 to fr1[i2] (M[rbp-416 + 4*%rax]) -> fr1[i2] = -1
	addl	$1, -820(%rbp)			# Incrementing i2 (M[rbp-820]) by 1 -> i2++

.L15:								
	movl	-828(%rbp), %eax		# Moving n (M[rbp-828]) to %eax
	cmpl	%eax, -820(%rbp)		# Checking if i2 < n (M[rbp-820] < M[rbp-828])
	jl	.L16						# If true, jump to .L16 (checking loop condition)

	# If false, continue to the next lines, which is calling of  calculateFrequency and printArrayWithFrequency functions
	movl	-828(%rbp), %ecx		# Moving n (M[rbp-828]) to %ecx 
	leaq	-416(%rbp), %rdx		# Moving address of fr1[0] (M[rbp-416]) to %rdx -> 3rd argument to calculateFrequency
	leaq	-816(%rbp), %rax		# Moving address of arr1[0] (M[rbp-816]) to %rax
	movl	%ecx, %esi				# Moving n (ecx) to %esi -> 2nd argument to calculateFrequency
	movq	%rax, %rdi				# Moving address of arr1[0] (rax) to %rdi -> 1st argument to calculateFrequency
	call	calculateFrequency		# Calling calculateFrequency function

	movl	-828(%rbp), %edx		# Moving n (M[rbp-828]) to %edx -> 3rd argument to printArrayWithFrequency
	leaq	-416(%rbp), %rcx		# Moving address of fr1[0] (M[rbp-416]) to %rcx 
	leaq	-816(%rbp), %rax		# Moving address of arr1[0] (M[rbp-816]) to %rax
	movq	%rcx, %rsi				# Moving address of fr1[0] (rcx) to %rsi -> 2nd argument to printArrayWithFrequency
	movq	%rax, %rdi				# Moving address of arr1[0] (rax) to %rdi -> 1st argument to printArrayWithFrequency
	call	printArrayWithFrequency	# Calling printArrayWithFrequency function
	movl	$0, %eax				# Moving 0 to %eax -> return value of main
	movq	-8(%rbp), %rcx			# Moving old value of %rbp (M[rbp-8]) to %rcx
	xorq	%fs:40, %rcx			# Part of buffer overflow protection
	je	.L18						# If no buffer overflow, jump to .L18
	call	__stack_chk_fail@PLT	# Else, call __stack_chk_fail function, which will terminate the program

.L18:								# If no buffer overflow, continue to the next lines
	leave							# Deallocates the stack frame, by moving %rbp to %rsp, and then popping the old value of %rbp
	.cfi_def_cfa 7, 8				# 7 represents %rsp. Indicates that %rsp + 8 is CFA
	ret								# Returns to the calling function, by popping the return address from the stack	
	.cfi_endproc					# Indicates end of the procedure

.LFE2: 													# End of main function			
	.size	main, .-main								# Gives the size of the main function
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"	
	.section	.note.GNU-stack,"",@progbits			
	.section	.note.gnu.property,"a"
	.align 8	
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0: 
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
