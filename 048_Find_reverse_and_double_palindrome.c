// WAP to enter a number and find the reverse of that number. Also display the double of the reverse number.
// And also check whether it's palindrome number or not.
#include <stdio.h>
int main()
{
    int num, rev = 0, rem, temp;
    printf("Enter a number\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reverse of given number is %d\n", rev);
    printf("Double of reverse is %d\n", rev * 2);
    if (temp == rev)
        printf("Yes it's palindrome number\n");
    else
        printf("No it's not a palindrome number\n");
    return 0;
}