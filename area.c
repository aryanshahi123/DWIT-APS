#include <stdio.h>

void main()
{
    float b, h, area;

    printf("Enter the base:");
    scanf("%f", &b);
    printf("Enter the height:");
    scanf("%f", &h);
    area = (1 / 2.0) * b * h;
    printf("Area of triangle=%f sq.unit.", area);
}