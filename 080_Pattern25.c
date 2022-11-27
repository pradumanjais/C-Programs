#include <stdio.h>
int main()
{
    int i, j, a, p = 5;
    for (p = 5, i = 1; i <= 5; i++, p--)
    {
        for (a = p, j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                printf("%d", a);
                j < 5 ? a++ : a--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}