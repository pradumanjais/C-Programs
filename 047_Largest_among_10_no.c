// WAP to input 10 numbers and find the largest number.
#include <stdio.h>
int main()
{
    int num, max = 0;
    printf("Enter 10 numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("Largest number is %d", max);
    return 0;
}