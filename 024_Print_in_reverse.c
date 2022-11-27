// WAP to print numbers in reverse order with a difference of 2.
#include <stdio.h>
int main()
{
    int i = 20;
    while (i >= 0)
    {
        printf("%d\t", i);
        i -= 2;
    }
    return 0;
}