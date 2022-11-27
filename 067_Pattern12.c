#include <stdio.h>
int main()
{
    int i, j, p;
    for (p = 5, i = 1; i <= 5; i++, p--)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                printf("%d ", p);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}