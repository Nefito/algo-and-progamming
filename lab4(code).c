#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, k, l, min, l1, counter;
    double n, s, L;
    s = 0, counter = 0;
    int arr1[100], arr2[100];
    double arr3[100];

    printf("Please enter the length of the array: ");
    scanf("%d", &l);
        if ( l > 50 || l < 0)
        {
            do //here i check the proper input of our length
            {
                printf("Enter a value greater than 0 and lesser than 50\n");
                scanf("%d", &l);
            }while (l > 50 || l < 0);
        }

    min = arr1[0];
    for (i = 0; i < l; i++)
    {
        arr1[i] = rand() % 10;
        printf("%d\n", arr1[i]);

        if(arr1[i] < min) //we find the minimal values of the array
        {
           min = arr1[i];
        }
    }
    printf("This array without its minimal values is:\n");

    l1 = l;
    for (i = 0; i < l; i++)
    {
        if (arr1[i] != min) //if the ith element isnt minimal we simply transfer it into the 2nd array
        {
            arr2[i] = arr1[i];
        }
        else // but if it is we eleminate it
        {
            counter++;
            if(arr1[i] == arr1[l-1])
            {
                arr2[i] = arr1[l-2];
                l1--;
            }
            else
            {
                arr2[i] = arr1[l-counter];
                l1--;
            }
        }
    }
    for(i = 0; i < l1; i++)
    {
        s += arr2[i];
        printf("%d\n", arr2[i]);
    }

    printf("And the new array is:\n");
    n = s / l1;
    L = l1 + 3;
    for (j = 0; j < 3; j++)
        {
            arr3[j] = n;
            printf("%.2f\n", arr3[j]);
        }

    for (i = 0, k = 3;k < L; i++, k++)
    {
        arr3[k] = arr2[i];
        printf("%.0f\n", arr3[k]);
    }

return 0;
}
