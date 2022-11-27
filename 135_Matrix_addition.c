// Addition of two matrix
#include <stdio.h>
#define row 3
#define col 4
int main()
{
    int arr1[row][col], arr2[row][col], sum[row][col], i, j;
    printf("Enter the elements of 1st matrix(%d*%d) row wise\n", row, col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter the elements of 2nd matrix(%d*%d) row wise\n", row, col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &arr2[i][j]);

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];

    printf("Addition of given matices is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}