#include <stdio.h>

/* test chars */
int main()
{
    for (int i = 0; i < 256; ++i)
        printf("%c %3d\n", i, i);
    
    printf("%c%c%c", 219, 219, 219);
    printf("%c%c%c", 254, 254, 254);
}