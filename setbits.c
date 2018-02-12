#include <stdio.h>

int setbits(unsigned int x, int p, int n, unsigned int y);

/*  Exercise 2-6: setbits(x, p, n, y) */

int main()
{
    unsigned int input1 = 0;
    unsigned int input2 = 255;
    
    int output = setbits(input1, 2, 2, input2);

    printf("Input = %d, %d, result = %d", input1, input2, output);
    return 0;
}

int setbits(unsigned int x, int p, int n, unsigned int y)
{
    return x | (((y & (0xffff >> n))) << n);
}