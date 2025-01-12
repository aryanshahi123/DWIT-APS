#include <stdio.h>

typedef int NUMBER;

void main()
{
    NUMBER a, b, c;

    printf("ENter a number:");
    scanf("%d", &a);
    printf("ENter another number:");
    scanf("%d", &b);
    c = a + b;
    printf("Sum = %d", c);
}