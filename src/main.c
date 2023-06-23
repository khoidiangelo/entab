#include <stdio.h>
#include "readline.c"
#include "entab.c"
#define MAXLINE 1000

int main() {
    printf("Hello, World!\n");
    char line[MAXLINE];
    int limit = readline(line, MAXLINE);
    printf("limit: %d\t", limit);
    limit = entab(line, limit);
    printf("limit: %d\n%s", limit, line);
    return 0;
}