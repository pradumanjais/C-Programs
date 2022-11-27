#include <stdio.h>
int main()
{
    int i, j, p;
    for (i = 1; i <= 5; i++)
    {
        p = 5;
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                printf("%d ", p);
                p--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}