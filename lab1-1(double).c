#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, l;
    
    //the user inputs a value for 'a' and the program gets the input
    
    printf("Input a value for a: ");
    scanf("%lf", &a);
    
    //same here for 'b'
    
    printf("Input a value for b: ");
    scanf("%lf", &b);
    
    //now we place our inputs into the formula and get the result
    
    l = ((a*a - 2*a*b + b*b) - (a*a + 2*a*b)) / (b*b);
    
    //now tell the result to the user
    
    printf("The result is %lf \n", l)
    
    return 0;
    
}
