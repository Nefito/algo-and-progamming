#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, k, l, min, counter;
    double n, s, L;
    s = 0;
    counter = 0;
    int arr1[100];
    double arr2[100];

    printf("Please enter the length of the array: ");
    scanf("%d", &l);
        if ( l > 50 || l < 0)
        {
            do
            {
                printf("Enter a value greater than 0 and lesser than 50\n");
                scanf("%d", &l);
            }while (l > 50 || l < 0);
        }


    for (i = 0; i < l; i++)
    {
        arr1[i] = rand() % 10;
        printf("%d\n", arr1[i]);
    }
    printf("This array without its minimal values is:\n");

    min = arr1[0]; //we find the minimal values of the array
    for(i = 0; i < l; i++)
    {
        if(arr1[i] < min)
        {
           min = arr1[i];
        }
    }
    for (i = 0; i < l; i++)
    {
        if (arr1[i] == min) //here we destroy them
        {
            arr1[i] = arr1[i+1];
            arr1[i] = arr1[l-1];
            l--;
        }
        printf("%d\n", arr1[i]);
        s += arr1[i];
    }

    printf("And the new array is:\n");
    n = s / l;
    L = l + 3;
    for (j = 0; j < 3; j++)
        {
            arr2[j] = n;
            printf("%.2f\n", arr2[j]);
        }

    for (i = 0, k = 3;k < L; i++, k++)
    {
        arr2[k] = arr1[i];
        printf("%.0f\n", arr2[k]);
    }

return 0;
}
