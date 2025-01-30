#include <stdio.h>
#include <string.h>

void main()
{
    char letter;
    printf("Enter a letter:");
    scanf("%c", &letter);
    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("It is vowel.");
        break;
    default:
        printf("It is not a vowel");
    }
}