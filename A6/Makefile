BASE_NAME=ass6_21CS10026_21CS30009

a.out: lex.yy.o y.tab.o $(BASE_NAME)_translator.o $(BASE_NAME)_target_translator.o
	g++ lex.yy.o y.tab.o $(BASE_NAME)_translator.o $(BASE_NAME)_target_translator.o

lex.yy.c: $(BASE_NAME).l y.tab.h $(BASE_NAME)_translator.h
	flex $(BASE_NAME).l

y.tab.c y.tab.h: $(BASE_NAME).y
	bison -dty $(BASE_NAME).y  	

$(BASE_NAME)_translator.o: $(BASE_NAME)_translator.h $(BASE_NAME)_translator.cxx
	g++ -c $(BASE_NAME)_translator.h
	g++ -c $(BASE_NAME)_translator.cxx

$(BASE_NAME)_target_translator.o: $(BASE_NAME)_translator.h $(BASE_NAME)_target_translator.cxx
	g++ -c $(BASE_NAME)_translator.h
	g++ -c $(BASE_NAME)_target_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

libmyl.a: ass2_21CS30009.o
	ar -rcs libmyl.a ass2_21CS30009.o

ass2_21CS30009.o: ass2_21CS30009.c myl.h
	gcc -Wall -c ass2_21CS30009.c

run: a.out libmyl.a
	@echo "Generating assembly file 1"
	./a.out $(BASE_NAME)_test1 > $(BASE_NAME)_quads1.out

	@echo "Generating assembly file 2"
	./a.out $(BASE_NAME)_test2 > $(BASE_NAME)_quads2.out

	@echo "Generating assembly file 3"
	./a.out $(BASE_NAME)_test3 > $(BASE_NAME)_quads3.out

	@echo "Generating assembly file 4"
	./a.out $(BASE_NAME)_test4 > $(BASE_NAME)_quads4.out

	@echo "Generating assembly file 5"
	./a.out $(BASE_NAME)_test5 > $(BASE_NAME)_quads5.out

clean:
	-rm a.out lex.yy.* *.o y.tab.* *.h.gch *.a 



# test: parser.out libass2_19CS30031.a
# 	@echo "Generating assembly files\n"
# 	./parser.out ass6_19CS30031_19CS10070_test1 > ass6_19CS30031_19CS10070_quads1.out
# 	./parser.out ass6_19CS30031_19CS10070_test2 > ass6_19CS30031_19CS10070_quads2.out
# 	./parser.out ass6_19CS30031_19CS10070_test3 > ass6_19CS30031_19CS10070_quads3.out
# 	./parser.out ass6_19CS30031_19CS10070_test4 > ass6_19CS30031_19CS10070_quads4.out
# 	./parser.out ass6_19CS30031_19CS10070_test5 > ass6_19CS30031_19CS10070_quads5.out
# 	./parser.out ass6_19CS30031_19CS10070_test6 > ass6_19CS30031_19CS10070_quads6.out
# 	./parser.out ass6_19CS30031_19CS10070_test7 > ass6_19CS30031_19CS10070_quads7.out
# 	@echo "Compiling assembly files\n"
# 	gcc ass6_19CS30031_19CS10070_test1.s -L. -lass2_19CS30031 -no-pie -o test1
# 	gcc ass6_19CS30031_19CS10070_test2.s -L. -lass2_19CS30031 -no-pie -o test2
# 	gcc ass6_19CS30031_19CS10070_test3.s -L. -lass2_19CS30031 -no-pie -o test3
# 	gcc ass6_19CS30031_19CS10070_test4.s -L. -lass2_19CS30031 -no-pie -o test4
# 	gcc ass6_19CS30031_19CS10070_test5.s -L. -lass2_19CS30031 -no-pie -o test5
# 	gcc ass6_19CS30031_19CS10070_test6.s -L. -lass2_19CS30031 -no-pie -o test6
# 	gcc ass6_19CS30031_19CS10070_test7.s -L. -lass2_19CS30031 -no-pie -o test7
# 	@echo "Binaries generated. Run using ./test<num>\n\n"
# 	@echo "Running test1:\n"
# 	@./test1
# 	@echo "Running test2:\n"
# 	@./test2
# 	@echo "Running test3:\n"
# 	@./test3
# 	@echo "Running test4:\n"
# 	@./test4
# 	@echo "Running test5:\n"
# 	@./test5
# 	@echo "Running test6:\n"
# 	@./test6
# 	@echo "Running test7:\n"
# 	@./test7
