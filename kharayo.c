// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all threee angles is equal to 180

#include <stdio.h>

void main()
{
    float a, b, c, sum;
    printf("Enter the first angle:");
    scanf("%f", &a);
    printf("Enter the second angle:");
    scanf("%f", &b);
    printf("Enter the third angle:");
    scanf("%f", &c);
    sum = a + b + c;
    if (sum == 180.00)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }
}