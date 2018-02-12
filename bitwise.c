#include <stdio.h>

int main()
{
    /*  Bitwise operators
        &   AND
        |   OR
        ^   XOR
        <<  left shift
        >>  right shift
        ~   one's complement    */

    // & used to turn off some bits:    n = n & 0177;
    // | used to turn on some bits:     x = x | 0xFF00;

    int x = 1;
    int y = 2;
    x & y;      // = 0
    x && y;     // = 1

    x << 2;     // shift x left twice (low filled with 0)
    x >> 3;     // shift right 3 times
                // if x unsigned, low filled with 0
                // otherwise filled with sign bits OR 0

}