/* Write a recursive function that displays a positive integer in words, fow example if the integer is 2134 then it display --
 two one three four
*/
#include <stdio.h>
void display(int n);
void word(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    display(num);
}

void display(int n)
{
    if (n == 0)
        return;
    display(n / 10);
    word(n % 10);
}

void word(int n)
{
    switch (n)
    {
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;
    case 0:
        printf("zero ");
        break;
    }
}