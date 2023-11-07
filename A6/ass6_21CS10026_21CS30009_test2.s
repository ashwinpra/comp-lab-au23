	.file	"ass6_21CS10026_21CS30009_test2.c"

#	Allocation of function variables and temporaries on the stack:

#	printStr
#	s : -8
#	readInt
#	eP : -8
#	printInt
#	n : -4
#	testIncDec
#	n : -4
#	t0 : -12
#	t1 : -16
#	t2 : -20
#	main
#	n1 : -16
#	n10 : -236
#	n11 : -264
#	n12 : -288
#	n13 : -312
#	n2 : -20
#	n3 : -24
#	n4 : -28
#	n5 : -116
#	n6 : -124
#	n7 : -132
#	n8 : -140
#	n9 : -148
#	t10 : -56
#	t100 : -520
#	t101 : -524
#	t102 : -528
#	t103 : -536
#	t104 : -540
#	t105 : -544
#	t107 : -552
#	t108 : -556
#	t109 : -560
#	t11 : -60
#	t110 : -568
#	t111 : -572
#	t112 : -576
#	t12 : -64
#	t13 : -72
#	t14 : -76
#	t15 : -80
#	t16 : -88
#	t17 : -92
#	t18 : -96
#	t19 : -104
#	t20 : -108
#	t21 : -112
#	t22 : -120
#	t23 : -128
#	t24 : -136
#	t25 : -144
#	t26 : -152
#	t27 : -160
#	t28 : -164
#	t29 : -168
#	t3 : -8
#	t30 : -176
#	t31 : -180
#	t32 : -184
#	t33 : -192
#	t34 : -196
#	t35 : -200
#	t36 : -208
#	t37 : -212
#	t38 : -216
#	t39 : -224
#	t4 : -12
#	t40 : -228
#	t41 : -232
#	t42 : -240
#	t43 : -244
#	t44 : -248
#	t45 : -252
#	t46 : -256
#	t47 : -260
#	t48 : -268
#	t49 : -272
#	t5 : -32
#	t50 : -276
#	t51 : -280
#	t52 : -284
#	t53 : -292
#	t54 : -296
#	t55 : -300
#	t56 : -304
#	t57 : -308
#	t58 : -316
#	t59 : -320
#	t6 : -36
#	t60 : -324
#	t61 : -328
#	t62 : -332
#	t63 : -336
#	t64 : -344
#	t65 : -348
#	t66 : -352
#	t67 : -360
#	t68 : -364
#	t69 : -368
#	t7 : -40
#	t70 : -376
#	t71 : -380
#	t72 : -384
#	t73 : -392
#	t74 : -396
#	t75 : -400
#	t76 : -408
#	t77 : -412
#	t78 : -416
#	t79 : -420
#	t8 : -44
#	t80 : -428
#	t81 : -432
#	t82 : -436
#	t83 : -440
#	t84 : -448
#	t85 : -452
#	t87 : -460
#	t88 : -464
#	t89 : -468
#	t9 : -48
#	t90 : -476
#	t91 : -480
#	t92 : -484
#	t94 : -492
#	t95 : -496
#	t96 : -500
#	t97 : -508
#	t98 : -512

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
	subq    $20, %rsp
	movq    $.LC0, -12(%rbp)
	movq    -12(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -20(%rbp)
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
	subq    $576, %rsp
	movq    $.LC1, -8(%rbp)
	movq    -8(%rbp), %rdi
	call    printStr
	movl    %eax, -12(%rbp)
	movl    $30, -32(%rbp)
	movl    -32(%rbp), %eax
	movl    %eax, -16(%rbp)
	movl    $16, -36(%rbp)
	movl    -36(%rbp), %eax
	movl    %eax, -20(%rbp)
	movl    $7, -40(%rbp)
	movl    -40(%rbp), %eax
	movl    %eax, -24(%rbp)
	movl    $22, -44(%rbp)
	movl    -44(%rbp), %eax
	negl    %eax
	movl    %eax, -48(%rbp)
	movl    -48(%rbp), %eax
	movl    %eax, -28(%rbp)
	movq    $.LC2, -56(%rbp)
	movq    -56(%rbp), %rdi
	call    printStr
	movl    %eax, -60(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -64(%rbp)
	movq    $.LC3, -72(%rbp)
	movq    -72(%rbp), %rdi
	call    printStr
	movl    %eax, -76(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -80(%rbp)
	movq    $.LC4, -88(%rbp)
	movq    -88(%rbp), %rdi
	call    printStr
	movl    %eax, -92(%rbp)
	movl    -24(%rbp), %edi
	call    printInt
	movl    %eax, -96(%rbp)
	movq    $.LC5, -104(%rbp)
	movq    -104(%rbp), %rdi
	call    printStr
	movl    %eax, -108(%rbp)
	movl    -28(%rbp), %edi
	call    printInt
	movl    %eax, -112(%rbp)
	movl    -16(%rbp), %eax
	addl    -20(%rbp), %eax
	movl    %eax, -120(%rbp)
	movl    -120(%rbp), %eax
	movl    %eax, -116(%rbp)
	movl    -16(%rbp), %eax
	subl    -20(%rbp), %eax
	movl    %eax, -128(%rbp)
	movl    -128(%rbp), %eax
	movl    %eax, -124(%rbp)
	movl    -16(%rbp), %eax
	imull   -20(%rbp), %eax
	movl    %eax, -136(%rbp)
	movl    -136(%rbp), %eax
	movl    %eax, -132(%rbp)
	movl    -16(%rbp), %eax
	cdq     
	idivl   -20(%rbp)
	movl    %eax, -144(%rbp)
	movl    -144(%rbp), %eax
	movl    %eax, -140(%rbp)
	movl    -16(%rbp), %eax
	cdq     
	idivl   -20(%rbp)
	movl    %edx, -152(%rbp)
	movl    -152(%rbp), %eax
	movl    %eax, -148(%rbp)
	movq    $.LC6, -160(%rbp)
	movq    -160(%rbp), %rdi
	call    printStr
	movl    %eax, -164(%rbp)
	movl    -116(%rbp), %edi
	call    printInt
	movl    %eax, -168(%rbp)
	movq    $.LC7, -176(%rbp)
	movq    -176(%rbp), %rdi
	call    printStr
	movl    %eax, -180(%rbp)
	movl    -124(%rbp), %edi
	call    printInt
	movl    %eax, -184(%rbp)
	movq    $.LC8, -192(%rbp)
	movq    -192(%rbp), %rdi
	call    printStr
	movl    %eax, -196(%rbp)
	movl    -132(%rbp), %edi
	call    printInt
	movl    %eax, -200(%rbp)
	movq    $.LC9, -208(%rbp)
	movq    -208(%rbp), %rdi
	call    printStr
	movl    %eax, -212(%rbp)
	movl    -140(%rbp), %edi
	call    printInt
	movl    %eax, -216(%rbp)
	movq    $.LC10, -224(%rbp)
	movq    -224(%rbp), %rdi
	call    printStr
	movl    %eax, -228(%rbp)
	movl    -148(%rbp), %edi
	call    printInt
	movl    %eax, -232(%rbp)
	movl    -16(%rbp), %eax
	negl    %eax
	movl    %eax, -240(%rbp)
	movl    -240(%rbp), %eax
	addl    -20(%rbp), %eax
	movl    %eax, -244(%rbp)
	movl    -244(%rbp), %eax
	subl    -24(%rbp), %eax
	movl    %eax, -248(%rbp)
	movl    -248(%rbp), %eax
	addl    -28(%rbp), %eax
	movl    %eax, -252(%rbp)
	movl    $10, -256(%rbp)
	movl    -252(%rbp), %eax
	addl    -256(%rbp), %eax
	movl    %eax, -260(%rbp)
	movl    -260(%rbp), %eax
	movl    %eax, -236(%rbp)
	movl    -16(%rbp), %eax
	imull   -20(%rbp), %eax
	movl    %eax, -268(%rbp)
	movl    -268(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %eax, -272(%rbp)
	movl    -272(%rbp), %eax
	addl    -28(%rbp), %eax
	movl    %eax, -276(%rbp)
	movl    $10, -280(%rbp)
	movl    -276(%rbp), %eax
	subl    -280(%rbp), %eax
	movl    %eax, -284(%rbp)
	movl    -284(%rbp), %eax
	movl    %eax, -264(%rbp)
	movl    -20(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -292(%rbp)
	movl    -292(%rbp), %eax
	cdq     
	idivl   -28(%rbp)
	movl    %eax, -296(%rbp)
	movl    -16(%rbp), %eax
	addl    -296(%rbp), %eax
	movl    %eax, -300(%rbp)
	movl    $0, -304(%rbp)
	movl    -300(%rbp), %eax
	subl    -304(%rbp), %eax
	movl    %eax, -308(%rbp)
	movl    -308(%rbp), %eax
	movl    %eax, -288(%rbp)
	movl    -16(%rbp), %eax
	addl    -20(%rbp), %eax
	movl    %eax, -316(%rbp)
	movl    -24(%rbp), %eax
	negl    %eax
	movl    %eax, -320(%rbp)
	movl    -320(%rbp), %eax
	cdq     
	idivl   -28(%rbp)
	movl    %eax, -324(%rbp)
	movl    -316(%rbp), %eax
	imull   -324(%rbp), %eax
	movl    %eax, -328(%rbp)
	movl    $15, -332(%rbp)
	movl    -328(%rbp), %eax
	subl    -332(%rbp), %eax
	movl    %eax, -336(%rbp)
	movl    -336(%rbp), %eax
	movl    %eax, -312(%rbp)
	movq    $.LC11, -344(%rbp)
	movq    -344(%rbp), %rdi
	call    printStr
	movl    %eax, -348(%rbp)
	movl    -236(%rbp), %edi
	call    printInt
	movl    %eax, -352(%rbp)
	movq    $.LC12, -360(%rbp)
	movq    -360(%rbp), %rdi
	call    printStr
	movl    %eax, -364(%rbp)
	movl    -264(%rbp), %edi
	call    printInt
	movl    %eax, -368(%rbp)
	movq    $.LC13, -376(%rbp)
	movq    -376(%rbp), %rdi
	call    printStr
	movl    %eax, -380(%rbp)
	movl    -288(%rbp), %edi
	call    printInt
	movl    %eax, -384(%rbp)
	movq    $.LC14, -392(%rbp)
	movq    -392(%rbp), %rdi
	call    printStr
	movl    %eax, -396(%rbp)
	movl    -312(%rbp), %edi
	call    printInt
	movl    %eax, -400(%rbp)
	movq    $.LC15, -408(%rbp)
	movq    -408(%rbp), %rdi
	call    printStr
	movl    %eax, -412(%rbp)
	movl    -24(%rbp), %eax
	negl    %eax
	movl    %eax, -416(%rbp)
	movl    -416(%rbp), %edi
	call    printInt
	movl    %eax, -420(%rbp)
	movq    $.LC16, -428(%rbp)
	movq    -428(%rbp), %rdi
	call    printStr
	movl    %eax, -432(%rbp)
	movl    -28(%rbp), %eax
	negl    %eax
	movl    %eax, -436(%rbp)
	movl    -436(%rbp), %edi
	call    printInt
	movl    %eax, -440(%rbp)
	movq    $.LC17, -448(%rbp)
	movq    -448(%rbp), %rdi
	call    printStr
	movl    %eax, -452(%rbp)
	incl    -16(%rbp)
	movl    -16(%rbp), %edi
	call    testIncDec
	movq    $.LC18, -460(%rbp)
	movq    -460(%rbp), %rdi
	call    printStr
	movl    %eax, -464(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -468(%rbp)
	movq    $.LC19, -476(%rbp)
	movq    -476(%rbp), %rdi
	call    printStr
	movl    %eax, -480(%rbp)
	movl    -16(%rbp), %eax
	movl    %eax, -484(%rbp)
	incl    -16(%rbp)
	movl    -484(%rbp), %edi
	call    testIncDec
	movq    $.LC20, -492(%rbp)
	movq    -492(%rbp), %rdi
	call    printStr
	movl    %eax, -496(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -500(%rbp)
	movq    $.LC21, -508(%rbp)
	movq    -508(%rbp), %rdi
	call    printStr
	movl    %eax, -512(%rbp)
	decl    -16(%rbp)
	movl    -16(%rbp), %edi
	call    testIncDec
	movq    $.LC22, -520(%rbp)
	movq    -520(%rbp), %rdi
	call    printStr
	movl    %eax, -524(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -528(%rbp)
	movq    $.LC23, -536(%rbp)
	movq    -536(%rbp), %rdi
	call    printStr
	movl    %eax, -540(%rbp)
	movl    -16(%rbp), %eax
	movl    %eax, -544(%rbp)
	decl    -16(%rbp)
	movl    -544(%rbp), %edi
	call    testIncDec
	movq    $.LC24, -552(%rbp)
	movq    -552(%rbp), %rdi
	call    printStr
	movl    %eax, -556(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -560(%rbp)
	movq    $.LC25, -568(%rbp)
	movq    -568(%rbp), %rdi
	call    printStr
	movl    %eax, -572(%rbp)
	movl    $0, -576(%rbp)
	movl    -576(%rbp), %eax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
