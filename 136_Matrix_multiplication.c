// Program to find the multiplication of two matrix.
#include <stdio.h>
#define row1 3
#define col1 4
#define row2 col1
#define col2 2
int main()
{
    int i, j, k, arr1[row1][col1], arr2[row2][col2], mul[row1][col2];
    printf("Enter the elements of 1st matrix(%d*%d) \n", row1, col1);
    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter the elements of 2nd matrix(%d*%d) \n", row2, col2);
    for (i = 0; i < row2; i++)
        for (j = 0; j < col2; j++)
            scanf("%d", &arr2[i][j]);

    for (i = 0; i < row1; i++)
        for (j = 0; j < col2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < col1; k++)
                mul[i][j] += arr1[i][k] * arr2[k][j];
        }

    printf("Multiplication of given matices is \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}