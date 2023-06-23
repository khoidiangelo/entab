#include <stdio.h>
#include "readline.c"
#include "entab.c"
#define MAXLINE 1000
int main() {
    char line[MAXLINE];
    int limit = readline(line, MAXLINE);
    printf("before: %d\t", limit);
    limit = entab(line, limit);
    printf("after: %d\n%s", limit, line);
    return 0;
}