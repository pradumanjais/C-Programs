// WAP to find the prime factors of a given numbers.
#include <stdio.h>
void pfactor(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Prime factors of %d are:- ", num);
    pfactor(num);
    return 0;
}

void pfactor(int n)
{
    int i = 2;
    if (n == 1)
        return;
    while (n % i != 0)
        i++;
    printf("%d ", i);
    pfactor(n / i);
}