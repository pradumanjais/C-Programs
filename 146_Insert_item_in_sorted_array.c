// Program to insert an item in a sorted array at the proper place by shifting other elements to the right.
#include <stdio.h>
int main()
{
    int arr[50], i, n, item;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the item you want to insert\n");
    scanf("%d", &item);

    for (i = n - 1; item < arr[i] && i > 0; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = item;

    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}