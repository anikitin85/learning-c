#include <stdio.h>
#include <limits.h>
#include <float.h>

/*  Exercise 2-1: Determine ranges of char, short, int, long
    (signed and unsigned), then also floats */

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

    while (j < m)
    {
        j++;
        m++;
    }
    while (l < n)
    {
        l++;
        n++;
    }
    printf("lowest signed char value: %d\n", m);
    printf("highest signed char value: %d\n", j);
    printf("lowest signed char value: %d\n", n);
    printf("highest signed short int value: %d\n\n", l);

    int a, b;
    a = 0;
    b = a + 1;
    long int c, d;
    c = 0;
    d = c + 1;
    while (a < b)
    {
        a++;
        b++;
    }
    while (c < d)
    {
        c++;
        d++;
    }
    printf("lowest int value: %ld\n", b);
    printf("highest int value: %ld\n", a);
    printf("lowest long int value: %ld\n", d);
    printf("highest long int value: %ld\n\n", c);

    /* float e;
    double f;
    long double g;
    e = 0;
    f = 0;
    g = 0;

    printf("lowest float value: %f\n", e);
    printf("highest float value: %f\n", f);
    printf("lowest double value: %f\n", g);
    printf("highest double value: %f\n", e);
    printf("lowest long double value: %f\n", f);
    printf("highest long double value: %f\n", g); */

    // FOUND ONLINE
    printf("PART TWO\n===================\n");
    printf("Range of Char %d\n", CHAR_BIT);
    printf("Range of Char Max %d\n", CHAR_MAX);
    printf("Range of Char Min %d\n", CHAR_MIN);
    printf("Range of int min %d\n", INT_MIN);
    printf("Range of int max %d\n", INT_MAX);
    printf("Range of long min %ld\n", LONG_MIN);
    printf("Range of long max %ld\n", LONG_MAX);
    printf("Range of short min %d\n", SHRT_MIN);
    printf("Range of short max %d\n", SHRT_MAX);
    printf("Range of unsigned char %u\n", UCHAR_MAX);
    printf("Range of unsigned long %lu\n", ULONG_MAX);
    printf("Range of unsigned int %u\n", UINT_MAX);
    printf("Range of unsigned short %u\n", USHRT_MAX);
}