#include <stdio.h>
int main()
{
    int i, j, p, q, k;
    for (p = 0, q = 8, i = 1; i <= 5; i++, p++, q++)
    {
        k = 1;
        for (j = 1; j <= 17; j++)
        {
            if (j >= 10 - (i + p) && j <= i + q && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}