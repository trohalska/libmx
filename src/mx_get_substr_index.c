#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (!str || !sub || !*str || !*sub) return -2;
    char *s = (char *)str;
    int ln = mx_strlen(sub);
    int j = 0;
    while (*s) {
        int i = 0;
        for (i = 0; i < ln && s[i] == sub[i]; i++) {
            if (sub[i + 1] == '\0') {
                return j;
            }
        }
        if (sub[i + 1] != '\0') return -1;
        s++;
        j++;
    }
    return -2;
}
