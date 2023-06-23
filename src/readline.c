#include <stdio.h>
int readline(char s[], int limit) {
    int c, len = 0;
    for (int i = 0; i < limit-1 && (c = getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
        ++len;
    }
    if (c == '\n') {
        s[len] = c;
        ++len;
    }
    s[len] = '\0';
    return len;
}