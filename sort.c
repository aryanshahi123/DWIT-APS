#include <stdio.h>

void main(){
    int n[10], i,j,c;
    printf("Enter 10 numbers:");
    for (i = 0; i < 10;i++){
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 10;i++){
        for (j = 0; j < 10;j++){
            if(n[j]<n[j+1]){
                c = n[j];
                n[j] = n[j+1];
                n[j + 1] = c;
            }
        }
    }
    for (i = 0; i < 10;i++){
        printf("%d\t", n[i]);
    }
}