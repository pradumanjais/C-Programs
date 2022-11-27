// Program to input and display a matrix
#include <stdio.h>
#define row 4
#define col 3
int main()
{
    int arr[row][col], i, j;
    printf("Enter the elements of matrix(%d*%d) row-wise\n", row, col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);

    printf("Elements of matrix are \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}