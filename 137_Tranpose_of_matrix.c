// Program to find the tranpose of given matrix
#include <stdio.h>
#define row 3
#define col 4
int main()
{
    int i, j, arr[row][col], tran[col][row];
    printf("Enter the elements of the matrix(%d*%d)\n", row, col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < col; i++)
        for (j = 0; j < row; j++)
            tran[i][j] = arr[j][i];

    printf("Tranpose of given matrix is \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
            printf("%d ", tran[i][j]);
        printf("\n");
    }

    return 0;
}