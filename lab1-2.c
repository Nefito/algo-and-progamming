#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, result;
    
    //the user inputs a value for 'n' and the program gets the input
    
    printf("Please enter a value for n: ");
    scanf("%d", &n);
    
    //same here for 'm'
    
    printf("Please enter a value for m: ");
    scanf("%d", &m);
    
    //now we get the result which is a formula
    
    result = (m - ++n);
    
    printf("The first result is: %d;\n", result);
    
    //the second and third tasks are essentially the same and have the same results, so I did a little shortcut
    
    if (++m > --n)
    {
        printf(The second result is: True;\nThe third result is: True.\n");
    }
    else
    {
        printf("The second result is; False;\nThe third result is: False.\n");
    }
    
    return 0;
}
