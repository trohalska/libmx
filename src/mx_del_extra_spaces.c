#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
	if (!str || !*str) return NULL;

	char *n = mx_strtrim(str);
	if (n == NULL) return NULL;

	int kwl = 0;
	int w = mx_count_words_isspace(str, &kwl);

	char *t = mx_strnew(kwl + w - 2);
	if (t == NULL) return NULL;

	int i = 0;
	int j = 0;
	while (n[i]) {
		while (!mx_isspace(n[i]) && n[i]) {
			t[j] = n[i];
			i++;
			j++;
		}
		if (n[i]) {
			t[j] = ' ';
			j++;
		}	
		while (mx_isspace(n[i]) && n[i]) {
			i++;
		}
	}	
	free(n);
	return t;
}
