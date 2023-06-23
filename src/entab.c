#define TABSTOP 4
int entab(char s[], int limit) {
    int c = 0, i, r = 0;
    for (i = 0; i < limit; ++i) {
        if (s[i] == ' ') {
            ++c;
            if (c == TABSTOP) {
                for (int j = i; j < limit+1; ++j) {
                    s[j-TABSTOP+1] = s[j];
                }
                s[i-TABSTOP+1] = '\t';
                i -= TABSTOP;
                c = 0;
                r -= TABSTOP;
            }
        } else {
            c = 0;
            ++r;
        }
    }
    s[r] = '\n';
    ++r;
    s[r] = '\0';
    return r;
}