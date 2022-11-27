#include <stdio.h>
int main()
{
    int i, j, p;
    for (i = 1; i <= 9; i++)
    {
        for (p = 5, j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && j >= i - 4 && j <= 14 - i)
            {
                printf("%d", p);
                j < 5 ? p-- : p++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}