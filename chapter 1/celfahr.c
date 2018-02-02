#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = -40;
    upper = 120;
    step = 20;
    celsius = lower;

    printf("%3s %6s\n", "C", "F");

    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius += step;
    }
}