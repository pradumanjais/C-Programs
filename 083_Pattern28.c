#include <stdio.h>
int main()
{
    int i, j, p = 1;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && j >= i - 4 && j <= 14 - i)
            {
                printf("%d", p);
            }
            else
                printf(" ");
        }
        printf("\n");
        i < 5 ? p++ : p--;
    }
    return 0;
}