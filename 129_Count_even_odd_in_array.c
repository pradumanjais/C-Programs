// Program to count even and odd numbers in an array
#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE], even = 0, odd = 0, i;
    printf("Enter the elements of the array\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("There are %d even and %d odd elements in the given array", even, odd);
    return 0;
}