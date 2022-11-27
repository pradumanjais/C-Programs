// WAP to sort a 1D array in ascending order through selection sort.
#include <stdio.h>
int main()
{
    int arr[50], i, j, n, min, temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 2; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array is \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}