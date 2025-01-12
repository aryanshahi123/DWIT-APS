#include <stdio.h>

void main()
{
    int n, result, fact = 1, i;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d:%d", n, fact);
}
