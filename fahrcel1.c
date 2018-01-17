#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    /*  other basic data types
        sizes are machine-dependent */

    float flt;      /* floating point number */
    char chr;       /* character, a single byte */
    short shrt;     /* short integer */
    long lng;       /* long integer */
    double dbl;     /* double-precision fp */

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}