// Program to input values into an array and display them
#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter the elements of the array\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Array elements are: \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}