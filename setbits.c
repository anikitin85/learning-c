#include <stdio.h>

int setbits(int x, int p, int n, int y);

/*  Exercise 2-6: setbits(x, p, n, y) */

int main()
{
    unsigned int input1 = 10;
    unsigned int input2 = 20;
    
    int output = setbits(input1, 2, 2, input2);

    printf("Input = %d, %d, result = %d", input1, input2, output);
    return 0;
}

int setbits(int x, int p, int n, int y)
{

}