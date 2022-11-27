// Write a program to sort a 1D array, in ascending order through bubble sort.
#include <stdio.h>
int main()
{
    int arr[50], i, j, n, xchange, temp;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        xchange = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                xchange++;
            }
        }
        if (xchange == 0)
            break;
    }
    printf("Sorted array is \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}