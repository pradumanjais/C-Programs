#include <stdio.h>
int main()
{
    int i, j, p;
    for (i = 1; i <= 5; i++)
    {
        p = 5;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
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