#include "libmx.h"

int mx_quick_sort(char **arr, int left, int right) {
    if (!arr) return -1;
    int swap = 0;
    int mid = (left + right) / 2;
    int patr = mx_strlen(arr[mid]);
    if (left <= right) {
        char *tmp = 0;
        int i = left - 1;
        for (int j = left; j <= right; j++) {
            if (mx_strlen(arr[j]) < patr) {
                i++;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                if (i != j) swap++;
            }
        }
        i += 1;
        tmp = arr[i];
        arr[i] = arr[mid];
        arr[mid] = tmp;
        if (i != mid) swap++;

        // swap += mx_quick_sort(arr, left, mid - 1);
        // swap += mx_quick_sort(arr, mid + 1, right);
    }    
    return swap;
}
