#include <stdio.h>
#define N 5

void main(){
    float marks[N], total, percent;
    int i;
    printf("Enter marks in %d subjects:", N);
    for (i = 0; i < N;i++){
        scanf("%f", &marks[i]);
    }
    total = 0;
    for (i = 0; i < N;i++){
        total += marks[i];
    }
    percent = (total) / 5;
    printf("Total Marks: %0.2f\n", total);
    printf("Percentage:%0.2f", percent);
}