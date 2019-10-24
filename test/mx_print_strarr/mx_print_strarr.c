#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) { 
    while(*arr) {
        mx_printstr(*arr);
        if (*(arr + 1) == NULL) break;
        mx_printstr(delim);
        arr++;
    }
    mx_printstr("\n");
}

int main() {
    char *s[] = {"mama", "myla", "ramu", "ramu", "myla", "ramu", "ramu", NULL};
    char *delim = " ";
    mx_print_strarr(s, delim);
    return 0;
}

