#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    if (!dst || !src || len < 0) return NULL;
    char *d = dst;
    const char *s = src;
    if (!s) return NULL;
    char tmp[len];
    mx_strncpy(tmp, src, len);
    // for (size_t i = 0; i < len; i++) {
    //     tmp[i] = s[i];
    // }
    int i = 0;
    while (tmp[i]) {
        d[i] = tmp[i];
        i++;
    }
    return dst;
}
