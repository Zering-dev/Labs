#include <stdio.h>
#include <math.h>

int main()
{
    double x = 1.901;
    double a = 16.2;
    double b = 8.6;
    double c = -1.35;
    double r;

    r = (x >= 1.0 && x <= 3.0)
            ? (a * x * x + b * x + c)
        : (x > 3.0)
            ? (a * x + c)
            : (a * x * x + c);

    printf("При x = %.3f; r = %.3f\n", x, r);
    return 0;
}