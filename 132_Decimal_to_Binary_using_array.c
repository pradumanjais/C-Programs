// Program to convert a decimal number to binary number.
#include <stdio.h>
int main()
{
    int num, arr[15], i, j;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 0; num > 0; i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    printf("Binary number : \n");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}