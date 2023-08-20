a.out: main.o libmyl.a
	gcc main.o -L. -lmyl

main.o: main.c myl.h
	gcc -Wall -c main.c

libmyl.a: ass2_21CS30009.o
	ar -rcs libmyl.a ass2_21CS30009.o

ass2_21CS30009.o: ass2_21CS30009.c myl.h
	gcc -Wall -c ass2_21CS30009.c

run: a.out
	./a.out

clean:
	-rm a.out ass2_21CS30009.o libmyl.a main.o