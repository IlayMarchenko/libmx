#include "libmx.h"

void mx_int_printf(char *str, int num, ...) {
    va_list list_for_len;
    int size_of_numbers = 0;
    va_start(list_for_len, num);
    bool in_loop = true;
    int temp_index;
    int res_index = 0;
    char *current = mx_strnew(11);
    int len_of_current = 0;

    for (int i = 0; i < num; i++) {
        size_of_numbers += mx_intlen(va_arg(list_for_len, int));
    }
    va_end(list_for_len);

    int size_of_d = 2 * num;
    int new_size = mx_strlen(str) + (size_of_numbers - size_of_d);
    char *result = mx_strnew(new_size);

    va_list list;
    va_start(list, num);

    while (in_loop) {
        current = mx_itoa(va_arg(list, int));
        temp_index = mx_get_substr_index(str, "%d");

        if (str == (void *)0)
            break;

        if (temp_index < 0) {
            while(*str) {
                result[res_index] = *str++;
                res_index++;
            }
            mx_printstr(result);
            return;
        }
        else {
            for (int i = 0; i < temp_index; i++) {
                result[res_index] = *str++;
                res_index++;
            }
        }
        if (temp_index >= 0) {
            len_of_current = mx_strlen(current);
            for (int j = 0; j < len_of_current; j++) {
                result[res_index] = *current++;
                res_index++;
            }
        }
        str += mx_strlen("%d");
        // mx_strdel(&current);
        current = mx_strnew(11);
    }
    va_end(list);
    mx_printstr(result);
}

int main () {
    mx_int_printf("Hello :\n%d\n%d\n%d\n%d\n%d\n%d\n", 6, 1, 22, 333, 4444, 55555, 666666);
    system("leaks -q printf");
    return 0;
}
