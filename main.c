#include "inc/libmx.h"

// int main() {
//     char *s = NULL;
//     char *c = "yo";
//     printf("%d\n", mx_count_substr(s, c));
// }

// int main() {
//     //char *s = "  follow  *   the  white rabbit ";
//     char *s = NULL;
//     printf("%d\n", mx_count_words(s, ' '));
// }

// int main() {   
//     t_list *s = mx_create_node("dojo");
//     printf("%s", s->data);
//     return 0;
// }

// int main(void) {
//     char *name = "\f  My name...     is  \r Neo  \t\n ";
//     char *s = mx_del_extra_spaces(name);
//     printf("\"%s\"\n", s);
//     //printf("%c", s[26]);
//     //printf("%s\n", mx_concat_words(NULL)); //returns NULL
//     return 0;
// }

// int main(){
//     char *c = "t.txt";
//     printf("%s\n", mx_file_to_str(c));
//     return 0;
// }

// int main () {
//     char *s = "123456";
//     printf("%d\n", mx_get_char_index(s, '5'));
// }

// int main() {
//     char *s = "hello world";
//     char *c = "rld";
//     printf("%d\n", mx_get_substr_index(s, c));
// }

// int main() {
//     int s = 0;
//     printf("%s\n", mx_itoa(s));
//     return 0;
// }

// int main() {
//     char *a = "papa";
//     char *b = "mama";
//     char *c = "ss";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     t_list *s2 = mx_create_node(c);
//     s1->next = s2;
    
//     int k = mx_list_size(head);
//     printf("%d", k);
//     return 0;
// }

// int main () {
//     char d[] = "987654321987654321";
//     char s[] = "0123456789";
//     printf("%s\n", mx_memccpy(d, s, '5', 7));
//     printf("%s\n", d);
//     return 0;
// }

// int main () {
//     char s1[] = "01234567890123456789";
//     printf("%s\n", mx_memchr(s1, 53, 90));
//     return 0;
// }

// int main () {
//     char s1[] = "01234567890123756789";
//     char s2[] = "01234567890123456789";
//     printf("%d\n", mx_memcmp(s1, s2, 20));
//     return 0;
// }

// int main () {
//     char s[] = "8888888888888888888888";
//     char v[] = "123456";
//     printf("%s\n", mx_memcpy(s, v, 5));
//     return 0;
// }

// int main () {
//     char s1[] = "Trinity";
//     char s2[] = "i";
//     printf("%s\n", mx_memmem(s1, 7, s2, 1));
//     return 0;
// }

// int main () {
//     char s1[] = "Trinity";
//     printf("%s\n", mx_memmove(&s1[2], &s1[0], 3)); //trity
//     return 0;
// }

// int main () {
//     char s1[] = "Trinity";
//     printf("%s\n", mx_memchr(s1, 'i', 7));
//     return 0;
// }

// int main () {
//     char s[] = "jjjjjooooodddddkkkkk";
//     printf("%s\n", mx_memset(s, '5', 6));
//     return 0;
// }

// int main() {
// 	char *a = "papa";
// 	char *b = "mama";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     mx_pop_back(&head);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
// 	char *a = "papa";
// 	char *b = "mama";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     mx_pop_front(&head);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
//     char *s[] = {"mama", "myla", "ramu", "ramu", "myla", "ramu", "ramu", NULL};
//     char delim = '*';
//     mx_print_strarr(s, &delim);
//     return 0;
// }

// int main() {
//     int c = 9733;
//     mx_print_unicode(c);
//     printf("%c",'\n');
//     //wprintf(L"\n%ls\n", c);
//     return 0;
// }

// int main() {
//     char *a = "ma";
//     char *b = "pa";
//     char *c = "ss";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     mx_push_back(&head, c);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
//     t_list *t = mx_create_node("mama"); // check for NULL as well
//     mx_push_front(&t, "papa");
//     mx_printlist(t);
//     return 0;
// }

// int main() {
//     char *s[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     printf("%d\t", mx_quick_sort(s, 0, 3));
//     for (int i = 0; i <= 3; i++) {
//         printf("%s ", s[i]);
//     }
//     return 0;
// }

// int main() {
//     int fd = open("t.txt", O_RDONLY);
//     char *line;
//     int buf_size = 5;
//     int delim = 'g';
//     int k = mx_read_line(&line, buf_size, delim, fd);
//     printf("%d\n", k);
//     printf("%s", line);
//     close(fd);
//     return 0;
// }

// int main () {
//     char *ptr;
//     ptr = mx_realloc(NULL, 20);
//     mx_strcpy(ptr, "Это первая часть, ");
//     printf("%s\n", ptr);
//     ptr = mx_realloc(ptr, 100);
//     mx_strcat(ptr, "Это вторая часть");
//     printf("%s\n", ptr);
//     ptr = mx_realloc(ptr, 0);
//     printf("%s\n", ptr); //null
// }

int main() {
    printf("%s", mx_replace_substr("Ururu turu", "ru", "ta"));
    return 0;
}

// int main() {
//     /*char *a = "6";
//     char *b = "4";
//     char *c = "8";
//     char *d = "2";*/
//     t_list *head = mx_create_node("ma");
//     t_list *s1 = mx_create_node("pa");
//     t_list *s2 = mx_create_node("son");
//     t_list *s3 = mx_create_node("daugter");
//     head->next = s1;
//     s1->next = s2;
//     s2->next = s3;
//     mx_printlist(head);
//     printf("\n");
//     t_list *f = mx_sort_list(head, mx_cmp);
//     mx_printlist(f);
//     return 0;
// }

// int main(void) {
//     char str[] = "game over";
//     printf("\"%s\" - ", str);
//     mx_str_reverse(str);
//     printf(" \"%s\" ", str);
//     return 0;
// }

// int main(void) {
//     char s[20];
//     s[0] = 'H';
//     s[1] = 'e';
//     s[2] = '\0';
//     char ss[] = "llo";
//     mx_strcat(s, ss);
//     printf("%s\n", s);
//     return 0;
// }

// int main () { //for me, need to be deleted
// 	char a[] = "true_";
// 	char b[] = "false";
// 	char *p = mx_strjoin(a, b);
// 	printf("%s", p);
// 	return 0;
// }

// int main(void) {
//     printf("task 03\n");

//     char dst[20];
//     char src[] = "Hello";
//     mx_strncpy(dst, src, 2);

//     if (dst[2] == '\0')
//             printf("2 element is \\0 \n" );
//     else
//        printf("2 element is not \\0 \n" );
    
//     printf("%s\n", dst);

//     mx_strncpy(dst, src, 10);
//     printf("%s\n", dst);

//     mx_strncpy(dst, src, 5);
//     printf("%s\n", dst);

//     return 0;
// }

// int main() {
//     char *s = "hello kajdbhkjfdg;kfajb;ksg";
//     char *d = mx_strndup(s, 10);
//     printf("%s", d);
//     return 0;
// }

// int main(void) {
//     char str[] = "**Good bye,**Mr.*Anderson.****";
//     char **p = mx_strsplit(str, '*');
//     for (int i = 0; p[i]; i++) {
//         printf("%s/", p[i]);
//     }
// }

// int main() {
//     char *s = "hello world";
//     char *c = "w";
//     printf("%s\n", mx_strstr(s, c));
// }

// int main(void) {
//     char *name = "\f My name... is Neo \t\n ";
//     printf("%s\n", mx_strtrim(name)); //returns "Free your mind."
//     //printf("%s\n", mx_concat_words(NULL)); //returns NULL
//     return 0;
// }

// int main () {
// 	char str[] = "ONE";
// 	mx_swap_char(&str[0], &str[1]);
// 	mx_swap_char(&str[1], &str[2]);
// 	printf("%s\n", str);
// 	return 0;

// }
