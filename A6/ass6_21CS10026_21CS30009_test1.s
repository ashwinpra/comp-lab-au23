	.file	"ass6_21CS10026_21CS30009_test1.c"

#	Allocation of function variables and temporaries on the stack:


	.section	.rodata
.LC0:
	.string	"Value passed to function = "
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC2:
	.string	"\nn1 = "
.LC3:
	.string	"\nn2 = "
.LC4:
	.string	"\nn3 = "
.LC5:
	.string	"\nn4 = "
.LC6:
	.string	"\nn1 + n2 = "
.LC7:
	.string	"\nn1 - n2 = "
.LC8:
	.string	"\nn1 * n2 = "
.LC9:
	.string	"\nn1 / n2 = "
.LC10:
	.string	"\nn1 % n2 = "
.LC11:
	.string	"\n-n1 + n2 - n3 + n4 + 10 = "
.LC12:
	.string	"\nn1 * n2 / n3 + n4 - 10 = "
.LC13:
	.string	"\nn1 + n2 * n3 / n4 - 0 = "
.LC14:
	.string	"\n(n1 + n2) * (n3 / n4) - 15 = "
.LC15:
	.string	"\n-n3 = "
.LC16:
	.string	"\n-n4 = "
.LC17:
	.string	"\nTest pre increment: "
.LC18:
	.string	", Value after call = "
.LC19:
	.string	"\nTest post increment: "
.LC20:
	.string	", Value after call = "
.LC21:
	.string	"\nTest pre decrement: "
.LC22:
	.string	", Value after call = "
.LC23:
	.string	"\nTest post decrement: "
.LC24:
	.string	", Value after call = "
.LC25:
	.string	"\n\n"
	.comm	printStr,4,4
	.comm	readInt,4,4
	.comm	printInt,4,4
	.comm	testIncDec,0,0
	.comm	main,4,4
	.text
	.globl  testIncDec
	.type   testIncDec, @function
testIncDec:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $28, %rsp
	movq    $.LC0, -16(%rbp)
	movq    -16(%rbp), %rdi
	call    printStr
	movl    %eax, -20(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -28(%rbp)
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testIncDec, .-testIncDec
	.text
	.globl  main
	.type   main, @function
main:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $604, %rsp
	movq    $.LC1, -12(%rbp)
	movq    -12(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
	movl    $30, -36(%rbp)
	movl    -36(%rbp), %eax
	movl    %eax, -20(%rbp)
	movl    $16, -40(%rbp)
	movl    -40(%rbp), %eax
	movl    %eax, -24(%rbp)
	movl    $7, -44(%rbp)
	movl    -44(%rbp), %eax
	movl    %eax, -28(%rbp)
	movl    $22, -48(%rbp)
	movl    -48(%rbp), %eax
	negl    %eax
	movl    %eax, -52(%rbp)
	movl    -52(%rbp), %eax
	movl    %eax, -32(%rbp)
	movq    $.LC2, -60(%rbp)
	movq    -60(%rbp), %rdi
	call    printStr
	movl    %eax, -64(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -72(%rbp)
	movq    $.LC3, -80(%rbp)
	movq    -80(%rbp), %rdi
	call    printStr
	movl    %eax, -84(%rbp)
	movl    -24(%rbp), %edi
	call    printInt
	movl    %eax, -88(%rbp)
	movq    $.LC4, -96(%rbp)
	movq    -96(%rbp), %rdi
	call    printStr
	movl    %eax, -100(%rbp)
	movl    -28(%rbp), %edi
	call    printInt
	movl    %eax, -104(%rbp)
	movq    $.LC5, -112(%rbp)
	movq    -112(%rbp), %rdi
	call    printStr
	movl    %eax, -116(%rbp)
	movl    -32(%rbp), %edi
	call    printInt
	movl    %eax, -120(%rbp)
	movl    -20(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -128(%rbp)
	movl    -128(%rbp), %eax
	movl    %eax, -124(%rbp)
	movl    -20(%rbp), %eax
	subl    -24(%rbp), %eax
	movl    %eax, -136(%rbp)
	movl    -136(%rbp), %eax
	movl    %eax, -132(%rbp)
	movl    -20(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -144(%rbp)
	movl    -144(%rbp), %eax
	movl    %eax, -140(%rbp)
	movl    -20(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %eax, -152(%rbp)
	movl    -152(%rbp), %eax
	movl    %eax, -148(%rbp)
	movl    -20(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %edx, -160(%rbp)
	movl    -160(%rbp), %eax
	movl    %eax, -156(%rbp)
	movq    $.LC6, -168(%rbp)
	movq    -168(%rbp), %rdi
	call    printStr
	movl    %eax, -172(%rbp)
	movl    -124(%rbp), %edi
	call    printInt
	movl    %eax, -176(%rbp)
	movq    $.LC7, -184(%rbp)
	movq    -184(%rbp), %rdi
	call    printStr
	movl    %eax, -188(%rbp)
	movl    -132(%rbp), %edi
	call    printInt
	movl    %eax, -192(%rbp)
	movq    $.LC8, -200(%rbp)
	movq    -200(%rbp), %rdi
	call    printStr
	movl    %eax, -204(%rbp)
	movl    -140(%rbp), %edi
	call    printInt
	movl    %eax, -208(%rbp)
	movq    $.LC9, -216(%rbp)
	movq    -216(%rbp), %rdi
	call    printStr
	movl    %eax, -220(%rbp)
	movl    -148(%rbp), %edi
	call    printInt
	movl    %eax, -224(%rbp)
	movq    $.LC10, -232(%rbp)
	movq    -232(%rbp), %rdi
	call    printStr
	movl    %eax, -236(%rbp)
	movl    -156(%rbp), %edi
	call    printInt
	movl    %eax, -240(%rbp)
	movl    -20(%rbp), %eax
	negl    %eax
	movl    %eax, -248(%rbp)
	movl    -248(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -252(%rbp)
	movl    -252(%rbp), %eax
	subl    -28(%rbp), %eax
	movl    %eax, -256(%rbp)
	movl    -256(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -260(%rbp)
	movl    $10, -264(%rbp)
	movl    -260(%rbp), %eax
	addl    -264(%rbp), %eax
	movl    %eax, -268(%rbp)
	movl    -268(%rbp), %eax
	movl    %eax, -244(%rbp)
	movl    -20(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -276(%rbp)
	movl    -276(%rbp), %eax
	cdq     
	idivl   -28(%rbp)
	movl    %eax, -280(%rbp)
	movl    -280(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -284(%rbp)
	movl    $10, -288(%rbp)
	movl    -284(%rbp), %eax
	subl    -288(%rbp), %eax
	movl    %eax, -292(%rbp)
	movl    -292(%rbp), %eax
	movl    %eax, -272(%rbp)
	movl    -24(%rbp), %eax
	imull   -28(%rbp), %eax
	movl    %eax, -300(%rbp)
	movl    -300(%rbp), %eax
	cdq     
	idivl   -32(%rbp)
	movl    %eax, -304(%rbp)
	movl    -20(%rbp), %eax
	addl    -304(%rbp), %eax
	movl    %eax, -308(%rbp)
	movl    $0, -312(%rbp)
	movl    -308(%rbp), %eax
	subl    -312(%rbp), %eax
	movl    %eax, -316(%rbp)
	movl    -316(%rbp), %eax
	movl    %eax, -296(%rbp)
	movl    -20(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -324(%rbp)
	movl    -28(%rbp), %eax
	negl    %eax
	movl    %eax, -328(%rbp)
	movl    -328(%rbp), %eax
	cdq     
	idivl   -32(%rbp)
	movl    %eax, -332(%rbp)
	movl    -324(%rbp), %eax
	imull   -332(%rbp), %eax
	movl    %eax, -336(%rbp)
	movl    $15, -340(%rbp)
	movl    -336(%rbp), %eax
	subl    -340(%rbp), %eax
	movl    %eax, -344(%rbp)
	movl    -344(%rbp), %eax
	movl    %eax, -320(%rbp)
	movq    $.LC11, -352(%rbp)
	movq    -352(%rbp), %rdi
	call    printStr
	movl    %eax, -356(%rbp)
	movl    -244(%rbp), %edi
	call    printInt
	movl    %eax, -360(%rbp)
	movq    $.LC12, -368(%rbp)
	movq    -368(%rbp), %rdi
	call    printStr
	movl    %eax, -372(%rbp)
	movl    -272(%rbp), %edi
	call    printInt
	movl    %eax, -376(%rbp)
	movq    $.LC13, -384(%rbp)
	movq    -384(%rbp), %rdi
	call    printStr
	movl    %eax, -388(%rbp)
	movl    -296(%rbp), %edi
	call    printInt
	movl    %eax, -392(%rbp)
	movq    $.LC14, -400(%rbp)
	movq    -400(%rbp), %rdi
	call    printStr
	movl    %eax, -404(%rbp)
	movl    -320(%rbp), %edi
	call    printInt
	movl    %eax, -408(%rbp)
	movq    $.LC15, -416(%rbp)
	movq    -416(%rbp), %rdi
	call    printStr
	movl    %eax, -420(%rbp)
	movl    -28(%rbp), %eax
	negl    %eax
	movl    %eax, -424(%rbp)
	movl    -424(%rbp), %edi
	call    printInt
	movl    %eax, -428(%rbp)
	movq    $.LC16, -436(%rbp)
	movq    -436(%rbp), %rdi
	call    printStr
	movl    %eax, -440(%rbp)
	movl    -32(%rbp), %eax
	negl    %eax
	movl    %eax, -444(%rbp)
	movl    -444(%rbp), %edi
	call    printInt
	movl    %eax, -448(%rbp)
	movq    $.LC17, -456(%rbp)
	movq    -456(%rbp), %rdi
	call    printStr
	movl    %eax, -460(%rbp)
	incl    -20(%rbp)
	movl    -20(%rbp), %edi
	call    testIncDec
	movl    %eax, -468(%rbp)
	movq    $.LC18, -476(%rbp)
	movq    -476(%rbp), %rdi
	call    printStr
	movl    %eax, -480(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -484(%rbp)
	movq    $.LC19, -492(%rbp)
	movq    -492(%rbp), %rdi
	call    printStr
	movl    %eax, -496(%rbp)
	movl    -20(%rbp), %eax
	movl    %eax, -500(%rbp)
	incl    -20(%rbp)
	movl    -500(%rbp), %edi
	call    testIncDec
	movl    %eax, -504(%rbp)
	movq    $.LC20, -512(%rbp)
	movq    -512(%rbp), %rdi
	call    printStr
	movl    %eax, -516(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -520(%rbp)
	movq    $.LC21, -528(%rbp)
	movq    -528(%rbp), %rdi
	call    printStr
	movl    %eax, -532(%rbp)
	decl    -20(%rbp)
	movl    -20(%rbp), %edi
	call    testIncDec
	movl    %eax, -536(%rbp)
	movq    $.LC22, -544(%rbp)
	movq    -544(%rbp), %rdi
	call    printStr
	movl    %eax, -548(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -552(%rbp)
	movq    $.LC23, -560(%rbp)
	movq    -560(%rbp), %rdi
	call    printStr
	movl    %eax, -564(%rbp)
	movl    -20(%rbp), %eax
	movl    %eax, -568(%rbp)
	decl    -20(%rbp)
	movl    -568(%rbp), %edi
	call    testIncDec
	movl    %eax, -572(%rbp)
	movq    $.LC24, -580(%rbp)
	movq    -580(%rbp), %rdi
	call    printStr
	movl    %eax, -584(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -588(%rbp)
	movq    $.LC25, -596(%rbp)
	movq    -596(%rbp), %rdi
	call    printStr
	movl    %eax, -600(%rbp)
	movl    $0, -604(%rbp)
	movl    -604(%rbp), %eax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
