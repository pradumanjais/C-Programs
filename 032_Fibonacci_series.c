// WAP to generate fibonacci series.
#include <stdio.h>
int main()
{
    long x = 0, y = 1, z;
    int i, n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("%ld\t", y);
    for (i = 1; i < n; i++)
    {
        z = x + y;
        printf("%ld\t", z);
        x = y;
        y = z;
    }
    return 0;
}