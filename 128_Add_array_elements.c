// Program to add elements of the array
#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of given elements is %d", sum);
    return 0;
}