#include <stdio.h>

void main()
{
    int c, j, n;
    printf("Enter a number:");
    scanf("%d", &n);
    c = 0;
    for (j = 1; j <= n; j++)
    {
        if (n % j == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
}