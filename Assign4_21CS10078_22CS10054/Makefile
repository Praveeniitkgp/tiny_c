ass4_21CS10078_22CS10054_output.txt: parser ass4_21CS10078_22CS10054_test.c
	./parser < ass4_21CS10078_22CS10054_test.c > ass4_21CS10078_22CS10054_output.txt

parser: lex.yy.o y.tab.o ass4_21CS10078_22CS10054_main.o
	gcc lex.yy.o y.tab.o ass4_21CS10078_22CS10054_main.o -lfl -o parser

ass4_21CS10078_22CS10054_main.o: ass4_21CS10078_22CS10054_main.c
	gcc -c ass4_21CS10078_22CS10054_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: ass4_21CS10078_22CS10054.l y.tab.h
	flex ass4_21CS10078_22CS10054.l

y.tab.c y.tab.h: ass4_21CS10078_22CS10054.y
	bison -dty --report=all ass4_21CS10078_22CS10054.y

clean:
	rm parser ass4_21CS10078_22CS10054_main.o lex.yy.* y.tab.* y.output
