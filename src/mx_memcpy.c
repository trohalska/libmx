#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *d = dst;
    char *s = malloc(n * sizeof(src));
    mx_strncpy(s, src, n);
    mx_strncpy(d, s, n);
    free((void *)s);
    return dst;
}
