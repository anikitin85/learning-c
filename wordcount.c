#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* Count chars, words, and lines in input */
int main()
{
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines words chars\n");
    printf("%3d %5d %5d\n", nl, nw, nc);
}