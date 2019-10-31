#include "libmx.h"


int mx_quicksort(char **arr, int left, int right){
	int res = 0;
   char *buff;
   char *mid;
   int l = left;
   int r = right;
   mid = arr[(l + r) / 2];
   while (l <= r){
      while (mx_strlen(arr[l]) < mx_strlen(mid)) l++;
      while (mx_strlen(arr[r]) > mx_strlen(mid)) r--;
      if (l <= r) {
         if(l < r){
            buff = arr[l];
            arr[l] = arr[r];
            arr[r] = buff;
            res++;
         }
         l++;
         r--;
      }
   }
   if (left < r) res += mx_quicksort(arr, left, r);
   if (l < right) res += mx_quicksort(arr, l, right);
   return res;
}
