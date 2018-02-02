#include <stdio.h>

#define IN  1
#define OUT 0

/* split input into words and display 1 word per line */
int main()
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }
}