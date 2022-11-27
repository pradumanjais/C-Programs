// WAP  to find whether a year is leap or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 100 != 0) // A non-centennial year is leap if it is divisible by 4
    {
        if (year % 4 == 0)
            printf("Leap Year");
        else
            printf("Not leap");
    }
    else
    {
        if (year % 400 == 0) // A centennial(divisible by 100) year is leap if it is divisible by 400
            printf("Leap Year");
        else
            printf("Not leap");
    }
    return 0;
}