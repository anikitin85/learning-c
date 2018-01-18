#include <stdio.h>

/* Veriy that getchar != EOF is 0 or 1 */
/* != takes precedence over = */

int main()
{
    int c;
    while (c = getchar() != EOF) {
        printf("%d\n", c);
    }
}