#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s || !*s || !c) return NULL;
    int k = mx_count_words(s, c);
    char **res = (char **) malloc((k + 1) * sizeof (char *));
    int i = 0;
    int j = 0;
    while (*s) {
        if (*s == c) {
			while (*s == c && *s != '\0')
				s++;
        }
        if (*s != c && *s != '\0') {
            char *p = (char *) s;
			while (*s != c && *s != '\0') {
				j++;
                s++;
            }
            res[i] = mx_strndup(p, j);
            i++;
            j = 0;
        }
    }
    res[i] = NULL;
    return res;
}
