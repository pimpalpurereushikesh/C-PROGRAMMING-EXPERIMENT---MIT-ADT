#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Accept employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter employee name: ");
        scanf("%49s", e[i].name);

        printf("Enter employee salary: ");
        scanf("%f", &e[i].salary);
    }

    // Display employee details
    printf("\n----- Employee Details -----\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}
