#include <stdio.h>
#define N 5
// function declaration
int total(int a[], int size);
int greater(int a[], int size);
int lowest(int a[], int size);

void main()
{
    int arr[N], choice, i, sum, great, least;
    char qw;

    do
    {
        printf("Welcome to this array program. Choices:\n1.Sum\n2.Find the greatest number.\n3.Find the least number.\nPlease enter your choice:");
        scanf("%d", &choice);
        while (choice < 1 || choice > 3)
        {
            printf("\nInvalid Choice.\n Re-enter the choice:");
            scanf("%d", &choice);
        }
        printf("\nEnter 5 numbers:");
        for (i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("The elements of array are:");
        for (i = 0; i < N; i++)
        {
            printf(" %d\t", arr[i]);
        }
        printf("\n");

        switch (choice)
        {
        case 1:
            sum = total(arr, N);
            printf("Sum=%d", sum);
            break;
        case 2:
            great = greater(arr, N);
            printf("Greatest=%d", great);
            break;
        case 3:
            least = lowest(arr, N);
            printf("Least=%d", least);
            break;
        default:
            printf("Invalid Choice");
        }
        printf("\n-------------------------------\n");
        printf("\nDo you want to continue?(Y/N):");
        scanf(" %c", &qw);
        printf("------------------------------\n");
    } while (qw == 'Y' || qw == 'y');
    printf("Program terminated...");
}

// FUNCTION DEFINITIONS

// FIND THE SUM
int total(int a[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

// FIND THE GREATEST NUMBER
int greater(int a[], int size)
{
    int i;
    int great = a[0];
    for (i = 1; i < size; i++)
    {
        if (a[i] > great)
        {
            great = a[i];
        }
    }
    return great;
}

// FIND THE LEAST NUMBER
int lowest(int a[], int size)
{
    int i;
    int low = a[0];
    for (i = 1; i < size; i++)
    {
        if (a[i] < low)
        {
            low = a[i];
        }
    }
    return low;
}