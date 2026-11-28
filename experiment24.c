#include <stdio.h>

int main()
{
    FILE *fp;
    int rollno;
    char name[50];
    float marks;

    // Creating a file
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    // Accepting student details
    printf("Enter Student Roll Number: ");
    scanf("%d", &rollno);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Student Marks: ");
    scanf("%f", &marks);

    // Storing details in file
    fprintf(fp, "%d %s %.2f\n", rollno, name, marks);

    fclose(fp);

    // Opening file to read data
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    // Displaying stored data
    printf("\nStudent Details:\n");

    fscanf(fp, "%d %49s %f", &rollno, name, &marks);

    printf("Roll Number: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    fclose(fp);

    return 0;
}
