#include <stdio.h>

/*  print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; fp version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    /*  Formatting options
        %d      decimal int
        %6d     decimal int, at least 6 digits wide
        %f      fp
        %6f     fp, at least 6 digits wide
        %.2f    fp, 2 digits after decimal point
        %6.2f   fp, at least 6 wide and 2 after dec. point
        %o      octal
        %x      hexadecimal
        %c      character
        %s      character string
        %%      % */
}