#ifndef LIBMX_H
#define LIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include <string.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}t_list;



// Utils pack
void mx_printchar(char c);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_nbr_to_hex(unsigned long nbr);
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_itoa(int number);
void mx_foreach(int *arr, int size, void(*f)(int));
int mx_binary_search(char**arr, int size, const char*s, int*count);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);



// String pack
int mx_strlen(const char *s); //V
void mx_swap_char(char *s1, char *s2); //V
void mx_str_reverse(char *s); //V
void mx_strdel(char **str); //V
void mx_del_strarr(char ***arr); //V
int mx_get_char_index(const char *str, char c); //V
char *mx_strdup(const char *s1); //X
char *mx_strndup(const char *s1, size_t n); //V
char *mx_strcpy(char *dst, const char *src); //V
char *mx_strncpy(char *dst, const char *src, int len); //X
int mx_strcmp(const char *s1, const char *s2); //V
char *mx_strcat(char *restrict s1, const char *restrict s2); //X
char *mx_strstr(const char *haystack, const char *needle); //V
int mx_get_substr_index(const char *str, const char *sub); //V
int mx_count_substr(const char *str, const char *sub); //V
int mx_count_words(const char *str, char c); //X
char *mx_strnew(const int size); //V
char *mx_strtrim(const char *str); //V
char *mx_del_extra_spaces(const char *str); //V
char **mx_strsplit(const char *s, char c); //V
char *mx_strjoin(const char *s1, const char *s2); //V
char *mx_file_to_str(const char *file); //X
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd); //V
char *mx_replace_substr(const char *str, const char *sub, const char *replace); //V



// Memory pack
void *mx_memset(void *b, int c, size_t len); //V
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n); //V
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n); //V
int mx_memcmp(const void *s1, const void *s2, size_t n); //V
void *mx_memchr(const void *s, int c, size_t n); //V
void *mx_memrchr(const void *s, int c, size_t n); //V
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len); //V
void *mx_memmove(void *dst, const void *src, size_t len); //V
void *mx_realloc(void *ptr, size_t size); //V



// List pack
t_list *mx_create_node(void *data); //V
void mx_push_front(t_list **list, void *data); //V
int mx_list_size(t_list *list); //V
void mx_push_back(t_list **list, void *data); //V
void mx_pop_back(t_list **head); //X
void mx_pop_front(t_list **head); //X
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)); //V





#endif
