#include <stdio.h>

/* function prototype */
int power(int m, int n);
/* parameter names can be omitted:
   int power(int, int); */

/* Test power function */
int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power (2, i), power(-3, i));
    return 0;
}

/* power: raise base t n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (int i = 1; i <= n; ++i)
        p = p * base;
    return p;
}