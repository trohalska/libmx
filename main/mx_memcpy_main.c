#include "libmx.h"

int main () {
    char s[] = "jjjjjooooodddddkkkkk";
    printf("%s\n", mx_memcpy(s, "hello world", 6));
    return 0;
}

