#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *d = dst;
    char *s = malloc(n * sizeof(src));
    mx_strncpy(s, src, n);
    size_t i = 0;
    while (i < n) {
        if (s[i] == (char) c) return NULL;
        d[i] = s[i];
        i++;
    }
    free((void *)s);
    return dst;
}
