// WAP to draw a line using user defined function.
#include <stdio.h>
void drawline(void); /*Function Declaration*/
int main()
{
    drawline();
    return 0;
}

void drawline(void)
{
    int n = 80;
    while (n > 0)
    {
        printf("-");
        n--;
    }
}