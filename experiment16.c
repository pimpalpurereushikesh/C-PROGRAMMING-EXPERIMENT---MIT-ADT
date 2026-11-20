

   #include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    float marks[3];
};

int main() {
    struct student s;
    float total = 0, average;
    int i;

    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    fflush(stdout);
    scanf("%49s", s.name);

    for(i = 0; i < 3; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        fflush(stdout);
        scanf("%f", &s.marks[i]);

        total = total + s.marks[i];
    }

    average = total / 3;

    printf("\n----- Student Details -----\n");
    printf("Roll number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f, %.2f, %.2f\n",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("Total marks: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
