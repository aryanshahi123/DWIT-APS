#include <stdio.h>
#define N 5

int linearSearch(int arr[], int item);

void main()
{
    int arr[] = {10, 5, 4, 3, 100};
    int searchItem, a;
    printf("Enter the element that is needed to be searched:");
    scanf("%d", &searchItem);
    a = linearSearch(arr, searchItem);
    if (a == -1)
    {
        printf("Element is not in array.");
    }
    else
    {
        printf("It is in array at index %d", a);
    }
}

int linearSearch(int arr[], int item)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}