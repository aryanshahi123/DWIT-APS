#include <stdio.h>
#define N 5

void main()
{
    int i, num[N], c, s;
    printf("Enter %d numbers:", N);
    for (i=0;i<N;i++){
        scanf("%d", &num[i]);
    }
    c=num[0];
    s=num[0];
    for(i=1;i<N;i++){
        if(num[i]>c){
            c=num[i];
        }
        if(num[i]<s){
            s=num[i];
        }
    }
    printf("The greatest numbers is %d\n", c);
    printf("The smallest number is %d", s);
}
