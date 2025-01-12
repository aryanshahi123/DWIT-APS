#include <stdio.h>

void main()
{
    float a, b, result;
    int op;
    char ch;

    printf("Welcome to Calculator.");
    do
    {
        /* code */
        printf("\nOperations to choose from:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
        result = 0;
        printf("\nEnter your choice:");
        scanf("%d", &op);
        printf("Enter two numbers:");
        scanf("%f%f", &a, &b);
        switch (op)
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
            printf("Error");
        }
        if (op > 0 && op <= 4)
        {
            printf("The result is:%f", result);
        }

        printf("\nDo you want to continue?(Y/N):");
        scanf(" %c", &ch);
        printf("------------------------------------------");
    } while (ch == 'Y' || ch == 'y' || op < 1 || op > 4);
    printf("Calculator terminating.....");
}