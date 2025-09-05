%{
#include <stdio.h>
#include <string.h>
#include "symbol_table.h" // Include the header for the symbol table

extern void insert_symbol(char* token_name, char* lexeme);
%}

%option noyywrap

/* Definitions */
DIGIT       [0-9]
NONZERO     [1-9]
LETTER      [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
WHITESPACE  [ \t\n\r]

%%

 /* Keywords */
"auto"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"Bool"|"continue"|"if"|"static"|"Complex"|"default"|"inline"|"struct"|"Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union" {
    printf("<keyword, %s>\n", yytext);
    insert_symbol("keyword", yytext);
}

 /* Identifiers */
{IDENTIFIER} {
    printf("<identifier, %s>\n", yytext);
    insert_symbol("identifier", yytext);
}

 /* Integer Constants */
0|{NONZERO}{DIGIT}* {
    printf("<integer_constant, %s>\n", yytext);
    insert_symbol("integer_constant", yytext);
}

 /* Floating Constants */
({DIGIT}+\.{DIGIT}*|\.{DIGIT}+)([eE][+-]?{DIGIT}+)? |
{DIGIT}+[eE][+-]?{DIGIT}+ {
    printf("<floating_constant, %s>\n", yytext);
    insert_symbol("floating_constant", yytext);
}

 /* Character Constants */
'(\\.|[^\\'\n])' {
    printf("<character_constant, %s>\n", yytext);
    insert_symbol("character_constant", yytext);
}

 /* String Literals */
\"(\\.|[^\\"\n])*\" {
    printf("<string_literal, %s>\n", yytext);
    insert_symbol("string_literal", yytext);
}

 /* Punctuators */
"->"|"++"|"--"|"<<"|">>"|"<="|">="|"=="|"!="|"&&"|"||"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|=" {
    printf("<punctuator, %s>\n", yytext);
    insert_symbol("punctuator", yytext);
}
[\[\](){}.&*+-~!/%<>^|?:;=,#] {
    printf("<punctuator, %s>\n", yytext);
    insert_symbol("punctuator", yytext);
}

 /* Comments */
"/*"([^*]|\*+[^*/])*\*+"/" {
    printf("<multi_line_comment, %s>\n", yytext);
}

"//".*  {
    printf("<single_line_comment, %s>\n", yytext);
}

 /* Whitespace */
{WHITESPACE}+ { /* Ignore whitespace */ }

 /* Unrecognized character */
. {
    printf("<unrecognized_character, %s>\n", yytext);
}

%%