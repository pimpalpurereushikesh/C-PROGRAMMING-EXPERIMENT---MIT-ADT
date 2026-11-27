#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Using Variable:\n");
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)&a);

    printf("\nUsing Pointer:\n");
    printf("Value of a = %d\n", *ptr);
    printf("Address of a = %p\n", (void*)ptr);

    return 0;
}
