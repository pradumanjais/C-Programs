// Display numbers from 1 to n.
#include <stdio.h>
void display(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    display(num);
    return 0;
}

void display(int n)
{
    if (n == 0)
        return;
    display(n - 1);
    printf("%d\t", n);
}