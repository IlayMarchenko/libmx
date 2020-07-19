#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    int new_size = (int)size;
    char *new = mx_strnew(size);
    char *str = (char *)ptr;
    if (size == 0) {
        free(str);
        return NULL;
    }
    if (!ptr || ptr == NULL) {
        return (void *)new;
    }
    mx_memcpy(new, str, new_size);
    free(str);
    return (void*)new;
}

// int main () {
//     char *str = malloc(sizeof (char) * 10);
//     for (int i = 0; i < 9; i++) {
//         str[i] = '1';
//     }
//     str[9] = '\0';
//     printf("%s\n", str);
//      str = mx_realloc(str, 150);
//     // str = realloc(str, 150);
//     // printf("size = %zu\n", malloc_size(str));
//     mx_memset(str+9, 'a', 140);
//     printf("%s\n", str);
// }
