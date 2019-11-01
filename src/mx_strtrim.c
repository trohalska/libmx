#include "libmx.h"

char *mx_strtrim(const char *str) {
	int i = 0;
	int j = mx_strlen(str) - 1;
	while (mx_isspace(str[i])) // check chars from start
		i++;
	while (mx_isspace(str[j]))
		j--;
	if (i <= j) {
		char *n;
		n = mx_strncpy(mx_strnew(j - i), &str[i], j - i);
		return n;
	}
	else return malloc(0);
}
