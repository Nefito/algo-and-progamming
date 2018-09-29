#include <stdio.h>
#include <math.h>

int main()
{
    double n, a, S;
    n = 2;
    S = 0;
    
    do
    {    
        a = n / ((3*n + 1)*(3*n + 2));
        S = a + (a*(n / ((3*n - 2)*(3*n + 1)))) + S;
        n++;
    }while (a > 0.0001);
    S = S + 1.5;
    
    printf("the sum is %lf!\n", S);
    
    return 0;
}
