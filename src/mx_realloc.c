#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *res = NULL;

    if (!size && ptr) {
        free(ptr);
        res = malloc(malloc_size(NULL));
        mx_memcpy(res, "", 16);
        return res;
    }
    if (size && !ptr) {
        res = malloc(size * sizeof(char));
        return res;
    }
    res = malloc(size * sizeof(char));
    mx_memcpy(res, ptr, malloc_size(ptr));
    free(ptr);
    return res;
}
