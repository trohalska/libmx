#include "libmx.h"

void mx_printlist(t_list *list) {
    t_list *q = list;
    while (q->next != NULL) {    
        printf("%s ", q->data);
        q = q->next;
    }
    printf("%s ", q->data); 
}
