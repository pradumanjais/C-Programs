// Write a program to find the smallest element in the array and swap it with the 0th element of the array.
#include <stdio.h>
#define max 100
int main()
{
    int arr[max], i, n, min = 0, temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n; i++)
    {
        if (arr[min] > arr[i])
            min = i;
    }

    if (min != 0)
    {
        temp = arr[0];
        arr[0] = arr[min];
        arr[min] = temp;
    }

    printf("After swapping of %d and %d array becomes\n", arr[0], arr[min]);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}