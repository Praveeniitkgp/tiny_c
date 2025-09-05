CC = gcc
CFLAGS = -Wall -g

all: ass3_lexer

ass3_lexer: lex.yy.c ass3_roll1_roll2.c symbol_table.h
	$(CC) $(CFLAGS) -o ass3_lexer lex.yy.c ass3_roll1_roll2.c -ll

lex.yy.c: ass3_roll1_roll2.l
	flex ass3_roll1_roll2.l

clean:
	rm -f ass3_lexer lex.yy.c

.PHONY: all clean