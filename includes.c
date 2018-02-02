#include <stdio.h>
#include <limits.h>
#include <float.h>

/*  Exercise 2-1: Determine ranges of char, short, int, long
    (signed and unsigned), then also floats */

    //char - Signed
    //int, short int, long int - Signed
    //float
    //double, long double

int main()
{
    unsigned char i = 0;
    unsigned short int k = 0;
    
    printf("lowest unsigned char value: %d\n", i);
    printf("highest unsigned char value: %d\n", --i);
    printf("lowest unsigned short int value: %d\n", k);
    printf("highest unsigned short int value: %d\n", --k);
}