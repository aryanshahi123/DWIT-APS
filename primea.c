#include <stdio.h>

void main()
{
    int n, i;
    int flag = 0;

    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Composite");
    }
    else
    {
        printf("Prime");
    }
}