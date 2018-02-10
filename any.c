#include <stdio.h>

int any(char wheretolook[], char whattolook[]);

/*  Exercise 2-5: return pos in s1 where
    any char from s2 occurs */

int main()
{
    char s1[] = "some arbitrary long character string";
    char s2[] = "r";
    int p = any(s1, s2);

    printf("In s1[], %c is on the %dth place", s1[p], p + 1);
    return 0;
}

/* any: return pos of any char from s2 within s1 */
int any(char s1[], char s2[])
{
    int p = -1;

    for (int i = 0; s2[i] != '\0'; ++i) {
        for (int j = 0; s1[j] != '\0'; ++j) {
            if (s1[j] == s2[i]) {
                p = j;
                break;
            }
        }
        if (p != -1)
                break;
    }
    return p;
}