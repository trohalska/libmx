#include "libmx.h"

int mx_strlen(const char *s) {
    int c = 0;
    while (*s != '\0') {
        c += 1;
        s += 1;
    }
    return c;
}
