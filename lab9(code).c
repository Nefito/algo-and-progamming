#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255

int main()
{
    char cons[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z' };
    int n, n1, n2, i, k, j, counter = 0, c_arr[MAX], print;
    char arr[MAX], arr1[MAX], c;
    FILE *f1;
    FILE *f2;
    f1 = fopen("f1.txt", "w+");
    f2 = fopen("f2.txt", "w+");

    if((f1 = fopen("f1.txt", "w+")) == NULL || (f2 = fopen("f2.txt", "w+")) == NULL)
    {
        printf("File could not be read.\n");
        exit(0);
    }

    printf("Enter the amount of strings for f1: ");
    scanf("%d", &n);

    printf("Enter N1:\n");
    scanf("%d", &n1);
    if(n1 < 0 || n1 > n)
    {
        printf("enter a valid number!\n");
        scanf("%d", &n1);
    }
    printf("Enter N2:\n");
    scanf("%d", &n2);
    if(n2 < 0 || n2 > n)
    {
        printf("enter a valid number!\n");
        scanf("%d", &n2);
    }

    if(n1 > n2)
    {
        printf("N1 has to be lesser than N2!\n");
        scanf("%d%d", &n1, &n2);
    }

    for( i = 1; i <= n; i++)
    {
        printf("Enter string %d into the file:\n", i);
        fgets(arr, MAX, stdin);
        fputs(arr, f1);

        if(i > n1 && i < n2)
        {
            if(arr[0] == 'A')
            {
                fputs(arr, f2);
                for(k = 0; k < strlen(arr); k++)
                {
                    for(j = 0; j < 19; j++)
                    {
                        if (arr[k] == cons[j])
                        {
                            counter++;
                        }
                    }
                }
                c_arr[i] = counter;
                counter = 0;
            }
        }
    }
    int max = 0;
    int max_index;
    for(k = 1; k <= i; k++)
    {
        if(c_arr[k] > max)
        {
            max = c_arr[k];
            max_index = k;
        }
    }

    printf("F1:\n");
    while(1)
    {
        print = fgetc(f1);
        if (feof(f1))
        {
            break;
        }
        printf("%c", print);
    }
    printf("\n");

    printf("F2:\n");
     while(1)
    {
        print = fgetc(f2);
        if (feof(f2))
        {
            break;
        }
        printf("%c", print);
    }
    printf("\n");

    fclose(f1);
    fclose(f2);

    if(max_index == 0)
    {
        printf("No rows with consonants in F2 :(\n");
    }
    else
    {
        printf("The row in F2 which has the most consonants is row #%d!\n", max_index);
    }

    return 0;
}
