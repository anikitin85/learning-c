#include <stdio.h>

/* Exercise 1-14: histogram of freqs of different chars in input */
int main()
{
    int c, i, j;
    int freqs[256];

    for (i = 0; i < 256; ++i)
        freqs[i] = 0;

    while ((c = getchar()) != EOF)
        ++freqs[c];
    
    /* Print results */
    for (i = 0; i < 256; ++i) {
        if (freqs[i] != 0) {
            if (i == '\t')
                printf("# of \\t\t");
            else if (i == '\n')
                printf("# of \\n\t");
            else if (i == ' ')
                printf("# of ''\t");
            else
                printf("# of %c\t", i);
            for (j = 0; j < freqs[i]; ++j)
                putchar(254);
            putchar('\n');
        }
    }
}