#include <stdio.h>
#include <stdlib.h>

int funct(int row, int column, int *a)
{
    int i, k, j, n, left, right, counter;
    left = 0, right = 0, counter = 0;

    for(n = 1; n < column-2; n++) // n is the index of the column that splits the matrix
    {
        for(i = 0; i < row; i++)
        {
            for (k = 0; k < n; k++)
            {
                left+= *(a + i*n + k); //for every n i sum up the left half
            }
            for(j = n+1; j < column - n; j++)
            {
                right+= *(a + i* column + j); //and the right half of the matrix
            }
            if(left > right)
            {
                counter++;
            }
            left = 0, right = 0; //reset left and right before n changes
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

    int *matrix;
    int size = row*column;
    matrix = (int*) malloc(size*sizeof(int));

    if(!(matrix = (int*) malloc(size*sizeof(int))))
    {
        printf("Allocation failed");
        exit(0);
    }

    printf("Your matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(k = 0; k < column; k++)
        {
            *(matrix + i*column + k) = rand() % 10;
            printf(" %d ",*(matrix + i*column + k));
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

    free(matrix);

    return 0;
}
