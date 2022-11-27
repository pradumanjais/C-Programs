// Write a program to search for an element in an array using linear search.
#include <stdio.h>
int LinearSearch(int arr[], int n, int item);
int main()
{
    int i, n, item, index, arr[50];
    printf("Enter the number of elements \n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the item to be searched\n");
    scanf("%d", &item);

    index = LinearSearch(arr, n, item);
    if (index == -1)
        printf("%d not found in array\n", item);
    else
        printf("%d found at %d position\n", item, index);
    return 0;
}

int LinearSearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == item)
            return i;
    return -1;
}