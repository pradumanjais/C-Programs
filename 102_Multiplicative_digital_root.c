/*If all digits of a number n are multiplied by each other repeating with the product, the one digit number obtained at last is called
 multiplicative digital root of n. The number of times digits need to be multiplied to reach one digit is called the multiplicative
 persistence of n. Write the functions MDR() and Mpersistance().
*/
#include <stdio.h>
int prodDigits(int);
int MDR(int);
int Mpersistance();
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Multiplicative digital root of %d is %d\n", num, MDR(num));
    printf("Multiplicative persistance of %d is %d\n", num, Mpersistance(num));
    return 0;
}

int prodDigits(int n)
{
    int pd = 1;
    while (n > 0)
    {
        pd = pd * (n % 10);
        n = n / 10;
    }
    return pd;
}

int MDR(int n)
{
    int mdr = n;
    while ((mdr / 10) > 0)
    {
        mdr = prodDigits(mdr);
        if (mdr / 10 == 0)
            continue;
        Mpersistance();
    }
    return mdr;
}

int Mpersistance()
{
    static int count = 0;
    count++;
    return count;
}