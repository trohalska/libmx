#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    if(!*src)
        return 0;
    while (str[i] && i < len) {
        dst[i] = src[i];      
        i++;
    }
    while (i < len) {
        dst[i] = '\0';
        i++;
    }    
    return dst;
}
