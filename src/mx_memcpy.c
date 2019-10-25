#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    if (!dst || !src || !n) return NULL;
    char * d = dst;
    const char *s = src;
    for (; n > 0; n--) {
        *d = *s;      
        d++;
        s++;
    }
    return dst;
}
