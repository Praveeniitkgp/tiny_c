#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

extern FILE *yyin;
extern int yylex();

#define MAX_SYMBOLS 1000

struct Symbol {
    char token_name[50];
    char lexeme[100];
};

struct Symbol symbol_table[MAX_SYMBOLS];
int symbol_count = 0;

void insert_symbol(char* token_name, char* lexeme) {
    if (symbol_count < MAX_SYMBOLS) {
        strcpy(symbol_table[symbol_count].token_name, token_name);
        strcpy(symbol_table[symbol_count].lexeme, lexeme);
        symbol_count++;
    } else {
        fprintf(stderr, "Symbol table is full\n");
    }
}

void print_symbol_table() {
    printf("\nSymbol Table:\n");
    printf("Token Name\tLexeme\n");
    printf("--------------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%s\t\t%s\n", symbol_table[i].token_name, symbol_table[i].lexeme);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        exit(1);
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Error opening input file");
        exit(1);
    }

    yyin = input_file;

    printf("Lexical Analysis:\n");
    while (yylex() != 0) {
        // The printing is handled in the lexer actions
    }

    fclose(input_file);

    print_symbol_table();

    return 0;
}