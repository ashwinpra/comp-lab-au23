	.file	"ass6_21CS10026_21CS30009_test1.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	f1 : -4
#	f2 : -8
#	f3 : -12
#	f4 : -20
#	f5 : -28
#	t0 : -16
#	t1 : -24
#	t2 : -32

	.text
	.globl  main
	.type   main, @function
main:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $32, %rsp
	movl    -4(%rbp), %eax
	addl    -8(%rbp), %eax
	movl    %eax, -16(%rbp)
	movl    -16(%rbp), %eax
	movl    %eax, -12(%rbp)
	movl    -4(%rbp), %eax
	imull   -8(%rbp), %eax
	movl    %eax, -24(%rbp)
	movl    -24(%rbp), %eax
	movl    %eax, -20(%rbp)
	movl    $5, -32(%rbp)
	movl    -32(%rbp), %eax
	movl    %eax, -28(%rbp)
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
