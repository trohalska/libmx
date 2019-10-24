//#include "libmx.c"

#include <wchar.h>
#include <stdlib.h>
#include <unistd.h>

void mx_print_unicode(wchar_t c) {
    
    write(1, &c, sizeof(wchar_t));
}



int main() {
    wchar_t *c = L"0x2605";
    mx_print_unicode(*c);
    wprintf(L"\n%ls\n", c);
    return 0;
}
