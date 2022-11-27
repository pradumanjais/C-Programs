/* Write a program using arrays, that reads a decimal number and converts it to (1) Binary (2) Octal or
   (3) Hexadecimal depending on user's choice
*/
#include <stdio.h>
void convert(int a, int b);
int main()
{
    int num, ch;
    printf("Enter a decimal number : \n");
    scanf("%d", &num);
    printf("1.Binary\n2.Octal\n3.Hexadecimal\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Binary equivalent is : ");
        convert(num, 2);
        break;
    case 2:
        printf("Octal equivalent is : ");
        convert(num, 8);
        break;
    case 3:
        printf("Hexadecimal equivalent is : ");
        convert(num, 16);
        break;
    }
    return 0;
}

void convert(int a, int b)
{
    int i = 0, rem, j;
    char arr[20];
    while (a > 0)
    {
        rem = a % b;
        a = a / b;
        if (rem > 9 && rem < 16)
            arr[i++] = rem - 10 + 'A';
        else
            arr[i++] = rem + '0';
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", arr[j]);
    }
}