#include <stdio.h>

int setbits(unsigned int x, int p, int n, unsigned int y);

/*  Exercise 2-6: setbits(x, p, n, y) */

int main()
{
    unsigned int input1 = 0;
    unsigned int input2 = 255;
    
    int output = setbits(input1, 4, 3, input2);

    printf("Input1 = %d, input2 = %d\n", input1, input2);
    printf("Result = %d", output);
    return 0;
}

int setbits(unsigned int x, int p, int n, unsigned int y)
{
    // save n lower bits of y in temp 1
    unsigned int temp1 = (y | (0xffff << n));
    // save lower n bits of x in temp 2
    return x;
}