#include <stdio.h>

// 1. No Argument and No Return Value
void area1()
{
    float b, h, area;

    printf("\nEnter base and height: ");
    scanf("%f %f", &b, &h);

    area = 0.5 * b * h;

    printf("Area of triangle = %.2f\n", area);
}

// 2. Argument but No Return Value
void area2(float b, float h)
{
    float area;

    area = 0.5 * b * h;

    printf("Area of triangle = %.2f\n", area);
}

// 3. No Argument but Return Value
float area3()
{
    float b, h;

    printf("\nEnter base and height: ");
    scanf("%f %f", &b, &h);

    return 0.5 * b * h;
}

// 4. Argument and Return Value
float area4(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float b, h, result;

    // Function 1
    printf("\n1. No Argument and No Return Value");
    area1();

    // Function 2
    printf("\n2. Argument but No Return Value");
    printf("\nEnter base and height: ");
    scanf("%f %f", &b, &h);
    area2(b, h);

    // Function 3
    printf("\n3. No Argument but Return Value");
    result = area3();
    printf("Area of triangle = %.2f\n", result);

    // Function 4
    printf("\n4. Argument and Return Value");
    printf("\nEnter base and height: ");
    scanf("%f %f", &b, &h);
    result = area4(b, h);
    printf("Area of triangle = %.2f\n", result);

    return 0;
}
