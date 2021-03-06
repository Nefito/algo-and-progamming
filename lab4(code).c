#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l, min, i1, counter;
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

    min = 100;
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

    for(i = 0; i < l; i++)
    {
        if(arr1[0] == min)
        {
            if (arr1[i] == min)
            {
                counter++;
                //when I have >1 mins the index of min element shifts on counter-1 positions back
                i1 = i-(counter-1);
                for(k = i; k < l; k++)
                {
                    arr2[i1] = arr1[i1+counter];
                    arr2[k] = arr1[k+counter];
                }
            }
        }
        else
        {
            if(arr1[i] != min)
            {
                arr2[i] = arr1[i];
            }
            else if (arr1[i] == min)
            {
                counter++;
                i1 = i-(counter-1);
                for(k = i; k < l; k++)
                {
                    arr2[i1] = arr1[i1+counter];
                    arr2[k] = arr1[k+counter];
                }
            }
        }
    }
    l-=counter; //shorten our array by the number of min elements

    for(i = 0; i < l; i++)
    {
        s += arr2[i];
        printf("%d\n", arr2[i]);
    }

    printf("And the new array is:\n");
    n = s / l;
    L = l + 3;
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
