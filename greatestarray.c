#include <stdio.h>
#define N 5

void main(){
    int i, num[5],c;
    printf("Enter %d numbers:", N);
    for (i = 0; i < N;i++){
        scanf("%d", &num[i]);
    }
            c = num[0];
        for (i = 0; i < N;i++){
            if(num[i]>c){
                c = num[i];
            }
        }
    printf("The greatest number is %d", c);
}
