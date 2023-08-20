BASE_NAME=ass3_21CS10026_21CS30009

# Make rule for a.out (depends on lex.yy.c and main c file)
a.out: lex.yy.c
	gcc lex.yy.c $(BASE_NAME).c

# Make rule for lex.yy.c (depends on target lex specification file)
lex.yy.c: $(BASE_NAME).l
	lex $(BASE_NAME).l

# Make rule for cleaning and removing files after compiling
clean:
	rm a.out lex.yy.c

# Make rule for running the executable
run: a.out
	./a.out > output.txt