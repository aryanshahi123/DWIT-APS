#include <stdio.h>

int mul(int n, int i);

void main(){
    int num, i;
    printf("Enter a number");
    scanf("%d", &num);
    for (i = 1; i <= 10;i++){
        printf("%d * %d = %d\n", num, i, mul(num, i));
    }
}

int mul(int n, int i){
    return (n * i);
}