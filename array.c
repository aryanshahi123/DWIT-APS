#include <stdio.h>

typedef int SAMYAM;

void main(){
    SAMYAM age[10],i;
    printf("Taking ages of 10 people:\n");
    for (i = 0; i < 10;i++){
        scanf("%d", &age[i]);
    }
    printf("\nThe ages are:");
    for (i = 0; i < 10;i++){
        printf("%d\t", age[i]);
    }
}