#include <stdio.h>
int main()
{
    int i, j, p = 0;
    for (i = 1; i <= 5; i++)
    {
        i <= 3 ? p++ : p--;
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