#include <stdio.h>

float sum(float a, float b);
float product(float a, float b);
float subtract(float a, float b);
float divide(float a, float b);

void main()
{
    float num1, num2, result;
    int choice;
    char qw;
    printf("---------------------------------------------------------\n");
    printf("Welcome to calculator.\n");
    printf("Available options:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");

    do
    {

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

        printf("---------------------------------------------------------\n");
        printf("Do you want to continute?(Y/N):");
        scanf(" %c", &qw);
    } while (qw == 'y' || qw == 'Y');
    printf("Closing Calculator...\n");
}

float sum(float a, float b)
{
    return (a + b);
}

float subtract(float a, float b)
{
    return (a - b);
}

float product(float a, float b)
{
    return (a * b);
}

float divide(float a, float b)
{
    return (a / b);
}