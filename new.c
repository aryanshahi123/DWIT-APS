#include <stdio.h>

float sum(float a, float b);

void main()
{
    float num1, num2, c;
    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);
    c = sum(num1, num2);
    printf("The sum is %f", c);
}

float sum(float a, float b)
{
    return (a + b);
}