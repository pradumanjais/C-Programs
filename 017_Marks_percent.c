// WAP that accepts marks in 5 sub and calculates total percentage marks.
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float per;
    printf("Enter the marks of all five subjects\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    per = ((float)(a + b + c + d + e) * 100) / 500;
    printf("Total percentage marks is %.2f", per);
    return 0;
}