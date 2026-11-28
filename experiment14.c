#include <stdio.h>

// User-defined function
int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number is not possible.");
    }
    else
    {
        result = factorial(num);

        printf("Factorial of %d = %d", num, result);
    }

    return 0;
}
