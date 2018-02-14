#include <stdio.h>
#include <math.h>

/* trig functions through add/sub/mult/div */

int main()
{
    double x, y;
    int i, precision, sign;
    long factorial;

    x = 1;       // set x here
    precision = 15;  // set precision of calculations here
    y = 0;
    sign = 1;
    factorial = 1;

    for (i = 1; i <= precision; i += 2) {
        if (i != 1) {
            factorial = factorial * (i - 1) * (i);
            sign *= -1;
            y = y + sign * (pow(x, i) / factorial);
        } else {
            y = x;
        }
    }

    printf("Sine function of math.h: %1.8f\n", sin(x));
    printf("Sine function thru calculations: %1.8f\n", y);
    printf("Sine function from ratio: %1.8f\n", sqrt(3.0)/2.0);

    return 0;
}