// Write a recursive function to enter a line of text and display it in reverse order, without storing the text in an array.
#include <stdio.h>
void reversetext();
int main()
{
    printf("Enter a line of text\n");
    reversetext();
    return 0;
}

void reversetext()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reversetext();
        printf("%c", c);
    }
}