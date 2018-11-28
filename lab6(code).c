#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) //function for swapping 2 elements
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int i, k, j, n, m, l, p, len = 0, c1 = 0, c2 = 0, word;
    char string[100];

    printf("Enter a string:\n");
    scanf("%[^\n]s", string);
    len = strlen(string);

    for(i = 0; i < len; i++)
    {
        if( string[i] == ' ')
        {
            c1++; // we count the number of words(c1+1)
        }
    }
    for(i = 0; i <= c1; i++)
    {
        if(i > 0)
        {
            c2++; //skip space if i > 0
        }
        word = c2;
        do
        {
            if(string[c2] == ' ') //i count the number of letter in a word
            {
                break;
            }
            else
            {
                c2++;
            }
        }while(string[c2] != '\0');

        //here I sort a word
        for(k = word; k < c2-1; k++)
        {
            for(j = k+1; j < c2; j++)
            {
                if(string[k] > string[j])
                {
                    swap(&string[k], &string[j]);
                }
            }
        }
    }

    printf("%s\n", string);
    return 0;
}
