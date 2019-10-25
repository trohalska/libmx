#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, int delim, const int fd) {
    //int fd = open(file, O_RDONLY);
    if (fd < 0) return -1;
    char buf[sizeof(buf_size)];
    int k = 0;
    int i = 0;
    int n = read(fd, buf, buf_size);
    while(n > 0) {
        int j = 0;
        while (buf[j]) {
            if (k == delim) break;
            lineptr[i][j] = buf[j];
            j++;
            k++;
        }
        lineptr[i][j] = '\0';
        i++;
        n = read(fd, buf, buf_size);
    }
    
    /*res[i] = NULL;

    char *s = mx_strnew(k + 1);
    if (!s) return NULL;
    char *p = s;
    int m = read(f, buf, sizeof(buf));
    while (m > 0) {
    	*s = *buf;
    	m = read(f, buf, sizeof(buf));
    	s++;
    }*/
	return k;
}
