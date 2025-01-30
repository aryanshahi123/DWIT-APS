#include <stdio.h>

void main(){
    int count =1, a=1,c,j;
    printf("First 10 prime numbers:\n");
    while(count<=10)
    {
        c=0;
        for(j=1;j<=a;j++){
            if(a%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\t",a);
            count++;
        }
        a+=1;
    }
}