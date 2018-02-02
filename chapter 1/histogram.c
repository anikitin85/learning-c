#include <stdio.h>

/* Exercise 1-13: histogram of lengths of words in input */
int main()
{
    int c, i, j, nc;
    int lengths[10];

    nc = 0;
    for (i = 0; i < 10; ++i)
        lengths[i] = 0;
    
    /* Count words by number of characters */
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (nc > 9)
                ++lengths[9];
            else if (nc > 0)
                ++lengths[nc - 1];
            nc = 0;
        } else {
            ++nc;
        }
    }

    /* Show results */
    for (i = 0; i < 9; ++i) {
        printf("%3d-letter words: ", (i + 1));
        for (j = 0; j < lengths[i]; ++j)
            putchar(254);
        putchar('\n');
    }
    printf("10+ letter words: ");
    for (j = 0; j < lengths[9]; ++j)
        putchar(254);
}