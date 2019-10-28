#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    if (!s || n < 0) return NULL;
    const char *d = s;
    while (n >= 0) {
        n--;
        if (d[n] == c) {
            return (void *)&d[n];
        }
    }
    return NULL;
}
