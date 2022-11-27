#include <stdio.h>
int main()
{
    int i, j, p = 1, q;
    for (i = 1; i <= 9; i++)
    {
        for (q = p, j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && j >= i - 4 && j <= 14 - i)
            {
                printf("%d", q);
                j < 5 ? q++ : q--;
            }
            else
                printf(" ");
        }
        printf("\n");
        i < 5 ? p++ : p--;
    }
    return 0;
}