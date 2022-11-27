// Program to insert an item in an array at a specified index by moving other elements to the right.
#include <stdio.h>
int main()
{
    int arr[50], i, n, item, index;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the item which you want to insert\n");
    scanf("%d", &item);
    printf("Enter the index where you want to insert\n");
    scanf("%d", &index);

    for (i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = item;

    printf("Array after insertion is \n");
    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}