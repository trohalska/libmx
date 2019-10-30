#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *d = NULL;
    char *c = ptr;
    if (size == 0) {
        free(ptr);
        ptr = NULL;
        return ptr;
    }
    if (ptr == NULL) {
        d = malloc(size * sizeof(char));
    }
    else {
        d = malloc(size * sizeof(char));
        if (d == NULL) return NULL;
        int i = 0;
        for (i = 0; c[i]; i++) {
            d[i] = c[i];
        }
        d[i] = '\0';        
    }
    return d;
}
