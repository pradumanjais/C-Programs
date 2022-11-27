// Write a program that scans a one dimensional array from left to right and compares the adjacent elements and swap if 1st one is small.
#include <stdio.h>
int main()
{
    int arr[50], n, i, temp, xchange = 0;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            xchange++;
        }
    }

    printf("Array after comparisions \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nTotal exchanges = %d\n", xchange);
    return 0;
}