#include <stdio.h>

float sum(float a, float b);
float product(float a, float b);
float subtract(float a, float b);
float divide(float a, float b);

void main()
{
    float num1, num2, result;
    int choice;
    printf("Welcome to calculator.\n");
    printf("Available options:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");

    printf("---------------------------------------------------------\n");
    printf("Enter your choice(1-4):");
    scanf("%d", &choice);

    printf("Enter two numbers:");
    scanf("%f%f", &num1, &num2);

    switch (choice)
    {
    case 1:
        result = sum(num1, num2);
        break;
    case 2:
        result = subtract(num1, num2);
        break;
    case 3:
        result = product(num1, num2);
        break;
    case 4:
        result = divide(num1, num2);
        break;
    default:
        printf("Error in choice!\n");
    }
    if (choice > 0 && choice < 5)
    {
        printf("The result of operation is %f\n", result);
    }
    printf("Closing Calculator...\n");
}