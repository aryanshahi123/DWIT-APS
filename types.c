#include <stdio.h>

void main()
{
    int roll;
    char name[30];
    float marks;
    char gender;

    printf("Enter your roll number:");
    scanf("%d", &roll);
    printf("Enter your name:");
    scanf("%s", name);
    // printf("Enter your gender(m/f):");
    // scanf("%c", &gender);
    // printf("Enter your marks:");
    // scanf("%d", &marks);
    printf("Your roll is %d , name is %s", roll, name);
}