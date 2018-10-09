#include <stdio.h>
#include <math.h>

int main()
{
    double n, a, s, x;
    n = 1;
    s = 0;
    a = 1;
    
    do
    {    
        x = 1 / ((3*n + 1)*(3*n + 2));
        s += a;
        a = x*( 1 / ((3*(n-1) + 2)*(3*(n-1) + 1)));
        n++;
    }while (x > 0.0001);
    
    printf("the sum is %lf!\n", s);
    
    return 0;
}
