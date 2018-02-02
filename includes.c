#include <stdio.h>
#include <limits.h>
#include <float.h>

/*  Exercise 2-1: Determine ranges of char, short, int, long
    (signed and unsigned), then also floats */

    //int, long int - Signed
    //float
    //double, long double

int main()
{
    unsigned char i = 0;
    unsigned short int k = 0;
    
    printf("lowest unsigned char value: %d\n", i);
    printf("highest unsigned char value: %d\n", --i);
    printf("lowest unsigned short int value: %d\n", k);
    printf("highest unsigned short int value: %d\n\n", --k);

    signed char j, m;
    j = 0;
    m = j + 1;
    signed short int l, n;
    l = 0;
    n = l + 1;

    while (j < m) {
        j++;
        m++;
    }
    while (l < n) {
        l++;
        n++;
    }
    printf("lowest signed char value: %d\n", m);
    printf("highest signed char value: %d\n", j);
    printf("lowest signed char value: %d\n", n);
    printf("highest signed short int value: %d\n", l);
}