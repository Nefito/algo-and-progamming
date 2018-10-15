#include <stdio.h>
#include <math.h>

int main()
{
    double n, a, x, f, s, f3, A;
    s = 0;
    n = 1;
    f = 1;
    f3 = 3*n*(3*n - 1);

    do
    {
        a = (pow(3, n)*f) / f3;
        x = 1 / ((3*n + 1)*(3*n + 2)); //this is a recurrent formula for a
        A = a*x;
        s += A;
        f = n*(n - 1);
        n++;
    }while (A > 0.0001);
    s+= 1; //since I have started with n = 1, I'm addding 1 for n = 0

    printf("The sum is %lf.\n", s);

    return 0;
}
