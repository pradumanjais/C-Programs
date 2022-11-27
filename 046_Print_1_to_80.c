// WAP to print numbers from 1 to 80 separated by tab, 8 numbers per line.
#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 80)
    {
        printf("%d\t", num);
        if (num % 8 == 0)
            printf("\n");
        num++;
    }
    return 0;
}