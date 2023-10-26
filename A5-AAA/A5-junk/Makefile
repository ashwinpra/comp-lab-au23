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

run: a.out $(BASE_NAME)_test.c
	./a.out < $(BASE_NAME)_test.c > output.txt
	@echo "Output written to output.txt"

clean:
	-rm a.out lex.yy.* *.o y.tab.* output.txt