
step - 1
make
(generates...)
bison -dty --report=all ass4_21CS10078_22CS10054.y
flex ass4_21CS10078_22CS10054.l
gcc -c lex.yy.c
gcc -c y.tab.c
gcc -c ass4_21CS10078_22CS10054_main.c


step - 2(to generate the necessary files:)
flex ass4_21CS10078_22CS10054.l
bison -dtv ass4_21CS10078_22CS10054.y

step - 3(Compile without the Flex library)
gcc lex.yy.c y.tab.c ass4_21CS10078_22CS10054_main.c -o a.out

step - 4(successfully compiled the program, you can run)
./a.out < ass4_21CS10078_22CS10054_test.c > ass4_21CS10078_22CS10054_output.txt