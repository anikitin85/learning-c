#include <stdio.h>

/* print numerical values of basic characters */
int main()
{
    for (int i = 'a'; i <= 'z'; i++) {
        printf("%3d %3c\n", i, i);
    }
}