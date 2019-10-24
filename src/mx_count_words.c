#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
    if (!str || !*str) return -1;
    int s = 0;
    while (*str != '\0') {
        // if not word
        if (*str == delimiter)
            while (*str == delimiter && *str != '\0')
                str++;
        // if word
        if (*str != delimiter) {
            s++;
            while (*str != delimiter && *str != '\0')
                str++;
        }
    }
    return s;
}
