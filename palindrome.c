#include <stdio.h>

void main()
{
    int n, r, s = 0, a;
    printf("Enter the number:");
    scanf("%d", &n);
    a = n;
    while (n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    if (s == a)
    {
        printf("%d is palindrome.", a);
    }
    else
    {
        printf("%d is not palindrome.", a);
    }
}