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
