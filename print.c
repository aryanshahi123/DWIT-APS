#include <stdio.h>

void main()
{
    char a, add;
    int age, roll;

    printf("Enter the first letter of your name:");
    scanf("%c", &a);
    printf("Enter first letter of your address:");
    scanf("%c", &add);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your roll:");
    scanf("%d", &roll);

    printf("The first letter of your name is %c, your age is %d, your roll is %d, the first letter of your address is %c", a, age, roll, add);
}