#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, int delim, const int fd) {
    if (fd < 0) return -1;
    char *line = *lineptr;
    char buf[buf_size];
    int k = 0;
    int n = read(fd, buf, buf_size);
    int i = 0;
    int j = 0;
    while(n > 0 && n == buf_size) {
        for (j = 0; j < buf_size; j++) {
            if (buf[j] == delim) {
                line[i] = '\0';
                return k;
            }
            line[i] = buf[j];
            i++;
            k++;
        }
        //buf[0] = '\0';
        n = read(fd, buf, buf_size);
    }
    if (j == buf_size) {
        return 0;
    }
	return k;
}
