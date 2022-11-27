// Program to generate fibonacci series.
#include <stdio.h>
int fib(int n);
int main()
{
    int nterms, i;
    printf("Enter the number of terms\n");
    scanf("%d", &nterms);

    for (i = 0; i < nterms; i++)
        printf("%d ", fib(i));
    printf("\n");
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}
