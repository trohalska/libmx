#include "libmx.h"

int main () {
    //char s[] = "";
    char *v = "123456";
    v = (char *) mx_realloc(v, 20);
    mx_strncpy(&v[6], &v[0], 5);
    
    printf("%s\n", v);
    return 0;
}

