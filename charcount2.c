#include <stdio.h>

/* count characters in input - different loop */
int main()
{
    double nc;  /* bigger that long */

    for (nc = 0; getchar() != EOF; ++nc)
        ;       /* null statement */
    printf("%.0f\n", nc);
}