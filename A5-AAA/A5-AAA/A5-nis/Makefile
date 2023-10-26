BASE_NAME=ass5_19CS30031_19CS10070
# BASE_NAME=ass5_21CS10026_21CS30009

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

clean:
	-rm a.out lex.yy.* *.o y.tab.* output.txt

test: a.out
	@echo "Running test 2 (Unary expressions and operators)"
	./a.out < ass5_19CS30031_19CS10070_test2.c > ass5_19CS30031_19CS10070_quads2.out
	@echo "Test 2 complete\n"

	@echo "Running test 3 (Relational and boolean operators with if-else blocks)"
	./a.out < ass5_19CS30031_19CS10070_test3.c > ass5_19CS30031_19CS10070_quads3.out
	@echo "Test 3 complete\n"

	@echo "Running test 4 (Arrays and pointers)"
	./a.out < ass5_19CS30031_19CS10070_test4.c > ass5_19CS30031_19CS10070_quads4.out
	@echo "Test 4 complete\n"

	@echo "Running test 5 (Declarations and assignments)"
	./a.out < ass5_19CS30031_19CS10070_test5.c > ass5_19CS30031_19CS10070_quads5.out
	@echo "Test 5 complete\n"

	@echo "Running test 6 (Loops)"
	./a.out < ass5_19CS30031_19CS10070_test6.c > ass5_19CS30031_19CS10070_quads6.out
	@echo "Test 6 complete\n"

	@echo "Running test 7 (Function calls)"
	./a.out < ass5_19CS30031_19CS10070_test7.c > ass5_19CS30031_19CS10070_quads7.out
	@echo "Test 7 complete\n"

	@echo "Running test 8 (General file)"
	./a.out < ass5_19CS30031_19CS10070_test8.c > ass5_19CS30031_19CS10070_quads8.out
	@echo "Test 8 complete\n"
	

# BASE_NAME=ass5_21CS10026_21CS30009

# a.out: lex.yy.o y.tab.o $(BASE_NAME)_translator.o
# 	g++ lex.yy.o y.tab.o $(BASE_NAME)_translator.o

# lex.yy.c: $(BASE_NAME).l y.tab.h $(BASE_NAME)_translator.h
# 	flex $(BASE_NAME).l

# y.tab.c y.tab.h: $(BASE_NAME).y
# 	bison -dty $(BASE_NAME).y  	

# $(BASE_NAME)_translator.o: $(BASE_NAME)_translator.h $(BASE_NAME)_translator.cxx
# 	g++ -c $(BASE_NAME)_translator.h
# 	g++ -c $(BASE_NAME)_translator.cxx

# lex.yy.o: lex.yy.c
# 	g++ -c lex.yy.c

# y.tab.o: y.tab.c
# 	g++ -c y.tab.c

# run: a.out $(BASE_NAME)_test.c
# 	./a.out < $(BASE_NAME)_test.c > output.txt
# 	@echo "Output written to output.txt"

# clean:
# 	-rm a.out lex.yy.* *.o y.tab.* output.txt