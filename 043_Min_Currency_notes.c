// WAP program to find out the minimum number of notes required for a given amount of money.
//  Notes allowed: 100, 50, 20, 10, 5, 2, and 1.
#include <stdio.h>
int main()
{
    int money, notes, ch;
    printf("Enter the amount\n");
    scanf("%d", &money);
    printf("Enter the biggest not from where to start\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 100:
        notes = money / 100;
        if (notes != 0)
            printf("Number of 100 Rs notes = %d\n", notes);
        money = money % 100;
    case 50:
        notes = money / 50;
        if (notes != 0)
            printf("Number of 50 Rs notes = %d\n", notes);
        money = money % 50;
    case 20:
        notes = money / 20;
        if (notes != 0)
            printf("Number of 20 Rs notes = %d\n", notes);
        money = money % 20;
    case 10:
        notes = money / 10;
        if (notes != 0)
            printf("Number of 10 Rs notes = %d\n", notes);
        money = money % 10;
    case 5:
        notes = money / 5;
        if (notes != 0)
            printf("Number of 5 Rs notes = %d\n", notes);
        money = money % 5;
    case 2:
        notes = money / 2;
        if (notes != 0)
            printf("Number of 2 Rs notes = %d\n", notes);
        money = money % 2;
    case 1:
        notes = money / 1;
        if (notes != 0)
            printf("Number of 1 Rs notes = %d\n", notes);
        break;
    default:
        printf("Please enter a valid value");
    }
    return 0;
}