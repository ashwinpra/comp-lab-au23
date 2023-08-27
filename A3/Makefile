BASE_NAME=ass3_21CS10026_21CS30009

a.out: lex.yy.c
	gcc lex.yy.c $(BASE_NAME).c

lex.yy.c: $(BASE_NAME).l
	lex $(BASE_NAME).l

run: a.out
	./a.out > output.txt
	@echo "Output written to output.txt"

clean:
	-rm a.out lex.yy.c