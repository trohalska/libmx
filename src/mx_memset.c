#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    if (!b || !c || !len) return NULL;
    char *p = b;
    for (; len > 0; len--) {
        *p = c;
        p++;         
    }
    return b;
}
