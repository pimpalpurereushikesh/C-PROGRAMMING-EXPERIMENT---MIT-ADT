#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0;

    // Opening the file
    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    // Counting the number of lines
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }

    // Displaying the result
    printf("Number of lines in the file = %d", lines);

    fclose(fp);

    return 0;
}

