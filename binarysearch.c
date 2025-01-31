#include <stdio.h>
#define N 10

int binarySearch(int arr[], int first, int last, int searchItem);

void main()
{
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchItem;
    int first = 0;
    int last = N - 1;
    int status;
    printf("Enter the item to search:");
    scanf("%d", &searchItem);
    status = binarySearch(arr, first, last, searchItem);
    if (status >= 0)
    {
        printf("Value found at index %d", status);
    }
    else
    {
        printf("Value not found.");
    }
}

int binarySearch(int arr[], int first, int last, int searchItem)
{
    int i;
    int mid = (first + last) / 2;
    int val = -1;
    if (first == last)
    {
        if (searchItem == arr[first])
        {
            return first;
        }
        else
        {
            return val;
        }
    }
    for (i = first; i <= last; i++)
    {
        if (searchItem == arr[mid])
        {
            val = mid;
        }
        else if (searchItem < arr[mid])
        {
            val = binarySearch(arr, first, mid - 1, searchItem);
        }
        else if (searchItem > arr[mid])
        {
            val = binarySearch(arr, mid + 1, last, searchItem);
        }
    }
    return val;
}