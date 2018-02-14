#include <stdio.h>

/*  Exercise 2-4: squeeze(s1, s2)
    Delete from s1 all chars that appear in s2 */

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[] = "some chars";
    char s2[] = "rm";
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    char c;
    int instr = 0;
    
    for (i = j = 0; s1[i] != '\0'; i++) {
        for (k = 0; s2[k] != '\0' && s1[i] != s2[k]; k++) {
        }
        if (s2[k] == s1[i])
            instr = 1;
        if (!instr) {
            s1[j++] = s1[i];
        }
        instr = 0;
    }
    s1[j] = '\0';
    return;
}