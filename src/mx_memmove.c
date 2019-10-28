#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    if (!dst || !src || len < 0) return NULL;
    char *d = dst;
    char *s = malloc (len * sizeof(src));
    if (s == NULL) return NULL;
    mx_strncpy(s, src, len);
    int i = 0;
    while (s[i]) {
        d[i] = s[i];
        i++;
    }
    free((void *)s);
    return dst;
}
