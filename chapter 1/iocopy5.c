#include <stdio.h>

/* Exercise 1-9: Input to output, reduce spaces to one */
/* I like my solution */
int main()
{
    int prev, cur;

    prev = 'a';

    while ((cur = getchar()) != EOF) {
        if (cur == ' ' && prev == ' ') continue;
        putchar(cur);
        prev = cur;
    }
}