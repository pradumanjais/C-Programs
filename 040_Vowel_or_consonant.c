// WAP to find whether the alphabet is a vowel or consonant.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Given alphabet is a vowel\n");
        break;
    default:
        printf("Given alphabet is consonant\n");
    }
    return 0;
}