#include <stdio.h>
#include <math.h>

int main()
{
    double n, a, S;
    n = 1;
    S = 0;
    
    do
    {    
        a = n / ((3*(n - 1) + 1)*(3*(n - 1) + 2));
        S += a
        n++;
    }while (a > 0.0001);
    
    printf("the sum is %lf!\n", S);
    
    return 0;
}
