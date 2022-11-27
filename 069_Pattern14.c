#include <stdio.h>
int main()
{
    int i, j, k, p;
    for (i = 1; i <= 5; i++)
    {
        k = 1;
        p = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                printf("%d", p);
                p++;
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