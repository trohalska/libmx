#include "libmx.h"

int main() {
    char *s = "hello world";
    char *c = "";
    printf("%d\n", mx_get_substr_index(s, c));
}
