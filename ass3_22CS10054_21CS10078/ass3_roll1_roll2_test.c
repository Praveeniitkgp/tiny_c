// Single-line comment
/* Multi-line
   comment */

#include <stdio.h>

int main() {
    int x = 42;
    float y = 3.14159;
    char c = 'A';
    char* str = "Hello, world!";

    if (x > 0) {
        printf("%s\n", str);
    }

    for (int i = 0; i < 10; i++) {
        x += i;
    }

    y *= 2.0;

    return 0;
}