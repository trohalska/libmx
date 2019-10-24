#include "libmx.h"

char *mx_strtrim(const char *str) {
	if (!str) return NULL;
	int k = 0; // check chars from end
	const char *s1 = (str + mx_strlen(str) - 1);
	while (*s1) {
		if (mx_isspace(*s1)) {
			k++;
			s1--;
		}
		else break;
	} 
	while (mx_isspace(*str)) // check chars from start
		str++;
	char *n = 0;
	if (!mx_isspace(*str)) { // create trimmed string
		int len = mx_strlen(str);
		n = mx_strncpy(mx_strnew(len - k), str, len - k);
	}
	return n;
}
