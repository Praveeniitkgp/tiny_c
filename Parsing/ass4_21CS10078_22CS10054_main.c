#include <stdio.h>
extern int yyparse();

int yywrap() {
    return 1; // Indicates end of input
}

int main() {
    printf("-------------------- Parsing Line No. 1  --------------------\n\n");
    yyparse();
    return 0;
}
