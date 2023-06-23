#define TABSTOP 4
int entab(char s[], int limit) {
    int c = 0, i, r = 0;
    for (i = 0; i < limit; ++i) {
        if (s[i] == ' ') {
            ++c;
            if (c == TABSTOP) {
                for (int j = i; j <= limit; ++j) {
                    s[j-TABSTOP+1] = s[j];
                }
                s[i-TABSTOP+1] = '\t';
                i -= TABSTOP+1;
                r -= TABSTOP;
                c = 0;
            }
        } else {
            c = 0;
            ++r;
        }
    }
    return r;
}