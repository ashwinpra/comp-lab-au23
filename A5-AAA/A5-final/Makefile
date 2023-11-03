BASE_NAME=ass5_21CS10026_21CS30009

a.out: lex.yy.o y.tab.o $(BASE_NAME)_translator.o
	g++ lex.yy.o y.tab.o $(BASE_NAME)_translator.o

lex.yy.c: $(BASE_NAME).l y.tab.h $(BASE_NAME)_translator.h
	flex $(BASE_NAME).l

y.tab.c y.tab.h: $(BASE_NAME).y
	bison -dty $(BASE_NAME).y  	

$(BASE_NAME)_translator.o: $(BASE_NAME)_translator.h $(BASE_NAME)_translator.cxx
	g++ -c $(BASE_NAME)_translator.h
	g++ -c $(BASE_NAME)_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

run: a.out $(BASE_NAME)_test1.c $(BASE_NAME)_test2.c $(BASE_NAME)_test3.c $(BASE_NAME)_test4.c $(BASE_NAME)_test5.c
	@echo "Running test 1"
	./a.out < $(BASE_NAME)_test1.c > $(BASE_NAME)_quads1.out
	@echo "Output written to $(BASE_NAME)_quads1.out\n"

	@echo "Running test 2"
	./a.out < $(BASE_NAME)_test2.c > $(BASE_NAME)_quads2.out
	@echo "Output written to $(BASE_NAME)_quads2.out\n"

	@echo "Running test 3"
	./a.out < $(BASE_NAME)_test3.c > $(BASE_NAME)_quads3.out
	@echo "Output written to $(BASE_NAME)_quads3.out\n"

	@echo "Running test 4"
	./a.out < $(BASE_NAME)_test4.c > $(BASE_NAME)_quads4.out
	@echo "Output written to $(BASE_NAME)_quads4.out\n"

	@echo "Running test 5"
	./a.out < $(BASE_NAME)_test5.c > $(BASE_NAME)_quads5.out
	@echo "Output written to $(BASE_NAME)_quads5.out\n"

clean:
	-rm a.out lex.yy.* *.o y.tab.* *.h.gch