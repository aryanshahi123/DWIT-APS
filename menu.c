#include <stdio.h>

void main()
{
    int choice;

    float a, b, result;

    printf("Welcome to Calculator.\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");

    printf("\nEnter your choice:");
    scanf("%d", &choice);

    printf("\nEnter two numbers:");
    scanf("%f%f", &a, &b);

    switch (choice)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        result = a / b;
        break;
    default:
        printf("Error in choice selection");
    }

    if (choice <= 4)
    {
        printf("The result is:%f", result);
    }
}