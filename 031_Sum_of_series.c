// Find the sum of this series upto n terms - 1+2+4+7+11+16+............
#include <stdio.h>
int main()
{
    int i, j = 1, n, sum = 0;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += j;
        j += i;
    }
    printf("Sum upto %d terms is %d", n, sum);
    return 0;
}
