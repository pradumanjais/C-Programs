// WAP to check whether a given number is fabonacci number or not.
#include <stdio.h>
int main()
{
    int a, b, c, num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num == 0 || num == 1)
        printf("It's a fabonacci number\n");
    else
    {
        a = 0;
        b = 1;
        c = a + b;
        while (c < num)
        {
            a = b;
            b = c;
            c = a + b;
        }
        if (c == num) // a number is fabonacci if 5n2+4 or 5n2-4 is a perfect square root
            printf("It's a fabonacci number\n");
        else
            printf("It's not a fabonacci number\n");
    }
    return 0;
}