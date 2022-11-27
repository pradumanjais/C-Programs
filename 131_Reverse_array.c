// Program to reverse the elements of an array
#include <stdio.h>
int main()
{
    int arr[5], i, j, temp;
    printf("Enter the elements of the array(5 elements)\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0, j = 4; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Array after reversing is : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}