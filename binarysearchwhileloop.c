#include <stdio.h>
#define N 10

void main()
{
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchItem, val, status, i, mid;
    int first = 0;
    int last = N - 1;
    printf("Enter the item to search:");
    scanf("%d", &searchItem);
    status = -1;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (searchItem == arr[mid])
        {
            status = mid;
            break;
        }
        else if (searchItem < arr[mid])
        {
            last = mid - 1;
        }
        else if (searchItem > arr[mid])
        {
            first = mid + 1;
        }
    }

    if (status >= 0)
    {
        printf("Value found at index %d", status);
    }
    else
    {
        printf("Value not found.");
    }
}
