#include <stdio.h>

void sum();
void product();
void subtract();
void divide();

float num1, num2, result;

void main()
{

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
            sum();
            break;
        case 2:
            subtract();
            break;
        case 3:
            product();
            break;
        case 4:
            divide();
            break;
        default:
            printf("Error in choice!\n");
        }
        printf("---------------------------------------------------------\n");
        printf("Do you want to continute?(Y/N):");
        scanf(" %c", &qw);
    } while (qw == 'y' || qw == 'Y');
}

void sum()
{
    result = num1 + num2;
    printf("The result of sum is:%f\n", result);
}

void subtract()
{
    result = num1 - num2;
    printf("The result of subtraction is:%f\n", result);
}

void product()
{
    result = num1 * num2;
    printf("The result of multiplication is:%f\n", result);
}

void divide()
{
    result = num1 / num2;
    printf("The result of division is:%f\n", result);
}