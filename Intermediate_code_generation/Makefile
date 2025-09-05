BASE = ass5_22CS10054_21CS10078

a.out: lex.yy.o $(BASE).tab.o $(BASE)_translator.o
	g++ lex.yy.o $(BASE).tab.o $(BASE)_translator.o -L/opt/homebrew/opt/flex/lib -lfl


$(BASE)_translator.o: $(BASE)_translator.cxx $(BASE)_translator.h
	g++ -c $(BASE)_translator.h
	g++ -c $(BASE)_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

$(BASE).tab.o: $(BASE).tab.c
	g++ -c $(BASE).tab.c

lex.yy.c: $(BASE).l $(BASE).tab.h $(BASE)_translator.h
	flex $(BASE).l

$(BASE).tab.c: $(BASE).y
	bison -dtv $(BASE).y

$(BASE).tab.h: $(BASE).y
	bison -dtv $(BASE).y

test :a.out
	mkdir -p ./output_test_codes
	./a.out < test_codes/ass5_22CS10054_21CS10078_test1.c > output_test_codes/ass5_22CS10054_21CS10078_quads1.out
	./a.out < test_codes/ass5_22CS10054_21CS10078_test2.c > output_test_codes/ass5_22CS10054_21CS10078_quads2.out
	./a.out < test_codes/ass5_22CS10054_21CS10078_test3.c > output_test_codes/ass5_22CS10054_21CS10078_quads3.out
	./a.out < test_codes/ass5_22CS10054_21CS10078_test4.c > output_test_codes/ass5_22CS10054_21CS10078_quads4.out
	./a.out < test_codes/ass5_22CS10054_21CS10078_test5.c > output_test_codes/ass5_22CS10054_21CS10078_quads5.out




	@echo "\nTest outputs generated and written to ./test-outputs.\n"


clean:
	rm lex.yy.c $(BASE).tab.c $(BASE).tab.h lex.yy.o $(BASE).tab.o $(BASE)_translator.o  $(BASE).output a.out  $(BASE)_translator.h.gch
