#include <stdio.h>
int palindrome(int n);

void main()
{
    int n, r, s, a;
    printf("Enter the number:");
    scanf("%d", &n);
    a = n;
    s = palindrome(n);
    if (s == a)
    {
        printf("%d is palindrome.", a);
    }
    else
    {
        printf("%d is not palindrome.", a);
    }
}

int palindrome(int n)
{
    int r, s = 0, a;
    while (n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    return s;
}