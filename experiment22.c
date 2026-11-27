c
#include <stdio.h>

int main()
{
    int a = 50;
    int *ptr;
    int **dptr;

    ptr = &a;
    dptr = &ptr;

    printf("Value of variable a = %d\n", a);
    printf("Value stored in pointer ptr = %d\n", *ptr);
    printf("Value stored in double pointer dptr = %d\n", **dptr);

    return 0;
}
