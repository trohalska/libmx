#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd) {
    if (fd < 0) return -1;
    char *p = NULL;
    char buf[1];
    int k = 0;
    int i = 0;
    int n = read(fd, buf, 1);
    while (n > 0) {
        char *line = malloc(buf_size + 1);
        for (i = 0; i < buf_size && n > 0; i++) {
            if (buf[0] == delim) {
                line[i] = '\0';
                *lineptr = mx_strjoin(*lineptr, line);
                free(line);
                return k;
            }
            line[i] = buf[0];
            k++;
            n = read(fd, buf, 1);
        }
        line[i] = '\0';
        //*lineptr = mx_strjoin(*lineptr, line);
        p = mx_strjoin(p, line);
        free(line);
    }
    *lineptr = p;
    return k;
}
