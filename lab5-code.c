#include <stdio.h>
#include <stdlib.h>

int funct(int row, int column, int a[row][column])
{
    int i, k, j, n, left, right, counter;
    left = 0, right = 0, counter = 0;

    for(n = 1; n < column-1; n++)
    {
        for(i = 0; i < row; i++)
        {
            for (k = 0; k < n; k++)
            {
                left+=a[i][k];
            }
            for(j = n+1; j < column - n; j++)
            {
                right+=a[i][j];
            }
            if(left > right)
            {
                counter++;
            }
            left = 0, right = 0;
        }
    }

    if(counter >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int row, column, i, k, x;
    row = 10, column = 10;
    int matrix[row][column];


    printf("Enter the number of rows for the matrix: \n");
    scanf("%d", &row);
    if(row > 10 || row < 0)
    {
        printf("Enter a number lesser than 10 and greater than 0: \n");
        scanf("%d", &row);
    }
    printf("Enter the number of columns for the matrix: \n");
    scanf("%d", &column);
    if(column > 10 || column < 0)
    {
        printf("Enter a number lesser than 10 and greater than 0: \n");
        scanf("%d", &column);
    }

    printf("Your matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(k = 0; k < column; k++)
        {
            matrix[i][k] = rand() % 10;
            printf(" %d ", matrix[i][k]);
        }
        printf("\n");
    }

    x = funct(row, column, matrix);
    if(x == 1)
    {
        printf("Such a column exists\n");
    }
    else
    {
        printf("Such a column doesn't exist\n");
    }

    return 0;
}
