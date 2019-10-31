#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char *d = big;
    const char *s = little;
    size_t i = 0;
    while (i < big_len - little_len) {
        if (mx_strncmp(d, s, little_len) == 0) {
            return (void *)d;
        }
        d++;
        i++;
    }
    return NULL;
}
