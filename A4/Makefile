BASE_NAME=asgn4_21CS10026_21CS30009
CC = gcc

$(BASE_NAME)_output.txt: a.out $(BASE_NAME)_test.c
	./a.out < $(BASE_NAME)_test.c > $(BASE_NAME)_output.txt

a.out: lex.yy.o y.tab.o $(BASE_NAME).o
	gcc lex.yy.o y.tab.o $(BASE_NAME).o

$(BASE_NAME).tab.c: $(BASE_NAME).y
	bison -dty $(BASE_NAME).y

lex.yy.c: $(BASE_NAME).l y.tab.h
	flex $(BASE_NAME).l

y.tab.c y.tab.h: $(BASE_NAME).y
	bison -dty $(BASE_NAME).y  	

$(BASE_NAME).o:
	gcc -c $(BASE_NAME).c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

clean:
	-rm a.out lex.yy.* *.o *.tab.* *.output