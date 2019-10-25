#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *p = mx_strnew(n - 1);
    if (p == NULL) return NULL;
    return mx_strncpy(p, s1, n);
}
