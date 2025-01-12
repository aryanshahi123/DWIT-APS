#include <stdio.h>
int fact(int n);

void main()
{
    int n, result;
    printf("Enter the number:");
    scanf("%d", &n);
    result = fact(n);
    printf("Factorial of %d:%d", n, result);
}

int fact(int n)
{
    int result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}