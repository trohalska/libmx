#include "libmx.h"

 void *mx_realloc(void *ptr, size_t size) {
    void *d = malloc(size * sizeof(ptr));
    if (d == NULL) return NULL;
    mx_strncpy((char *)d, ptr, mx_strlen(ptr));
    return d;
}
