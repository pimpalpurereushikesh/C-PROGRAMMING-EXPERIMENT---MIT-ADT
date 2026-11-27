
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100], copy[100];
    int i, len;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // 1. Copy one string into another
    strcpy(copy, str1);
    printf("\nCopied string = %s", copy);

    // 2. Reverse a string
    len = strlen(str1);

    printf("\nReverse of first string = ");
    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }

    // 3. Find length of strings
    printf("\nLength of first string = %zu", strlen(str1));
    printf("\nLength of second string = %zu", strlen(str2));

    // 4. Compare two strings
    if(strcmp(str1, str2) == 0)
    {
        printf("\nBoth strings are equal");
    }
    else
    {
        printf("\nBoth strings are not equal");
    }

    // 5. Concatenate two strings
    strcat(str1, str2);
    printf("\nConcatenated string = %s", str1);

    return 0;
}
