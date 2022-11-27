// WAP to find whether a number is even or odd.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        goto even;
    else
        goto odd;
even:
    printf("%d is even", n);
    goto end;
odd:
    printf("%d is odd", n);
    goto end;
end:
    printf("");
    return 0;
}