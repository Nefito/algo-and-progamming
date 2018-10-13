#include <stdio.h>
#include <math.h>

// here I make a factorial function
double fac(double n)
    {
        if (n == 0 || n == 1) return 1;
        return n * fac(n - 1);
    }


int main()
{
    double n, a, x, A, s;
    n = 1;
    s = 0;

    do
    {
        a = (pow(3, n)*fac(n)) / fac((3*n));\
        // x is the reccurent formula from a
        x = 1/((3*n + 1)*(3*n + 2));
        A = a*x;
        s = A + s;
        n++;
    }while(A > 0.000l);
    s+=1;

    printf("The sum is %lf.\n", s);

    return 0;
}
