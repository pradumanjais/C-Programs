#include <stdio.h>
int main()
{
    int i, j, p = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d ", p);
                p++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}