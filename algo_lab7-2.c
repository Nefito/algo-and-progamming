#include <stdio.h>
#include <stdarg.h>

double sum(int n, ...)
{
    va_list ptr;
    double sum = 0.0;
    int i;

    va_start(ptr, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(ptr, double);
    }

   va_end(ptr);

   return sum;
}

int main()
{
    double a, b, c;

    a = sum(5,1.12, 4.231, 2.1, 1.4543, 0.22);

    b = sum(10, 2.3, 3.1, 5.3, 1.2, 4.3031, 0.233, 2.26, 3.01, 1.22222, 1.4);

    c = sum(12, 1.1 ,2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9,10.101, 11.11, 12.12);

    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);

    return 0;
}
