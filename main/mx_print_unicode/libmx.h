#ifndef LIBMX_H
#define LIBMX_H

// malloc, malloc_size, free, open, read, write, close, exit

#include <unistd.h>




// utils pack ---------------

void mx_printchar(char c);
// void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
// void mx_print_strarr(char **arr, const char *delim);
// void mx_printint(int n);
// double mx_pow(double n, unsigned int pow);
// int mx_sqrt(int x);
// char *mx_nbr_to_hex(unsigned long nbr);
// unsigned long mx_hex_to_nbr(const char *hex);


// string pack ---------------
int mx_strlen(const char *s);


#endif
