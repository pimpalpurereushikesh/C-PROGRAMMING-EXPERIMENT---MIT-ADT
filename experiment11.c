#include <stdio.h>

int main()
{
    int i;
    int a[5];
    float b[5];
    char c[5];

    printf("Enter 5 integer elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter 5 float elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &b[i]);
    }

    printf("\nEnter 5 character elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf(" %c", &c[i]);
    }

    printf("\nInteger Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Value = %d, Address = %p\n", a[i], (void *)&a[i]);
    }

    printf("\nFloat Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Value = %.2f, Address = %p\n", b[i], (void *)&b[i]);
    }

    printf("\nCharacter Array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Value = %c, Address = %p\n", c[i], (void *)&c[i]);
    }

    return 0;
}
