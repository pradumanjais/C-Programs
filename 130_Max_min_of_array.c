// Program to find the largest and smallest number in an array.
#include <stdio.h>
int main()
{
    int arr[10], i, max, min;
    printf("Enter the elements of the array (10 elements)\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max = min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Smallest : %d and Largest : %d", min, max);
    return 0;
}