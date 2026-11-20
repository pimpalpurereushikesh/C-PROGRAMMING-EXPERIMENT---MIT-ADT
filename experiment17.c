#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    printf("Size of union: %lu bytes\n", sizeof(d));

    d.i = 10;
    printf("\nAfter storing integer:\n");
    printf("Integer = %d\n", d.i);

    d.f = 25.5;
    printf("\nAfter storing float:\n");
    printf("Float = %.2f\n", d.f);

    d.ch = 'A';
    printf("\nAfter storing character:\n");
    printf("Character = %c\n", d.ch);

    printf("\nSize of union members:\n");
    printf("Integer = %lu bytes\n", sizeof(d.i));
    printf("Float = %lu bytes\n", sizeof(d.f));
    printf("Character = %lu byte\n", sizeof(d.ch));

    return 0;
}
