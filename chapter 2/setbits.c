#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y);
unsigned int invert(unsigned int x, int p, int n);
unsigned int rightrot(unsigned int x, int n);

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

/*Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.*/
unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
    // get n right-most bits of y only
    y = ~(~0 << n) & y;
    // shift those n bits p-n bits to the left
    y = y << (p - n);
    // zero out n bits of x starting at p
    x = x & ~((~(~0 << n)) << (p - n));
    return x | y;
}

/*Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/
unsigned int invert(unsigned int x, int p, int n)
{
    return setbits(x, p, n, ~x >> (p - n));
}

/*Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.*/
unsigned int rightrot(unsigned int x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        x = setbits(x >> 1, 16, 1, x); // assumes 16-bit
    }
    return x;
}