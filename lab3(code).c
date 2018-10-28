#include <stdio.h>
#include <math.h>

int main()
{
    double X, Y, SE, SN, A, x;
    int n;

    for(X = 0.2; X <= 1; X += 0.08)
    {
        SN = 0, SE = 0;
        x = (X - 1) / (X + 1);
        Y = log(X)/2;
        for(n = 0; n <= 10; n++)
        {
            A = (1 / (2*n + 1))*(pow(x, (2*n + 1)));
            SN += A;
        }
        do
        {
            n = 0;
            A = (1 / (2*n + 1))*(pow(x, (2*n + 1)));
            SE += A;
            n++;
        }while( A > 0.0001);
        printf("X = %.02lf, SN = %lf, SE = %lf, Y = %lf\n", X, SN, SE, Y);
    }
}
