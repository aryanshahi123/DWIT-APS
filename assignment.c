// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss incurred,

#include <stdio.h>

int main()
{
    float cp, sp;
    printf("Enter your cost price:");
    scanf("%f", &cp);
    printf("Enter your selling price:");
    scanf("%f", &sp);
    if (sp > cp)
    {
        printf("You made profit.\n");
        printf("Profit Amount:%f", sp - cp);
    }
    else
    {
        printf("You incurred loss.\n");
        printf("Loss Amount:%f", cp - sp);
    }
    return 0;
}