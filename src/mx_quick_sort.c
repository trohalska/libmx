#include "libmx.h"

int mx_quick_sort(char **arr, int left, int right) {
    if (!arr) return -1;
    int swap = 0;
    //int patr1 = (left + right) / 2;
    int patr2 = mx_strlen(arr[(left + right) / 2]);
    if (left < right) {
        char *tmp = 0;
        int i = left - 1;
        for (int j = left; j <= right; j++) {
            if (mx_strlen(arr[j]) < patr2) {
                i++;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                if (i != j) swap++;
            }
        }
        // i += 1;
        // tmp = arr[i];
        // arr[i] = arr[patr];
        // arr[patr] = tmp;
        // if (i != patr) swap++;

        // swap += mx_quick_sort(arr, left, patr1 - 1);
        // swap += mx_quick_sort(arr, patr1 + 1, right);
    }    
    return swap;
}
