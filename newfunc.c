#include <stdio.h>
void sum();

void main()
{
    sum();
    printf("------------------\n");
    sum();
}

void sum()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("The sum is:%d\n", a + b);
}