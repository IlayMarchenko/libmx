#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {

    int number_of_substr = mx_count_substr(str, sub);
    int len_sub = mx_strlen(sub);
    int len_replace = mx_strlen(replace);
    int new_size = mx_strlen(str) + (len_replace - len_sub) * number_of_substr;
    char *result = mx_strnew(new_size);
    int temp_index;
    int res_index = 0;
    bool in_loop = true;

    if (mx_get_substr_index(str, sub) < 0) {
        return (char *)str;
    }

    if (str == NULL || sub == NULL || replace == NULL || !str || !sub || !replace) {
        return NULL;
    }

    while (in_loop) {
        temp_index = mx_get_substr_index(str, sub);

        if (str == '\0')
            break;

        if (temp_index < 0) {
            while(*str) {
                result[res_index] = *str++;
                res_index++;
            }
            return result;
        }
        else {
            for (int i = 0; i < temp_index; i++) {
                result[res_index] = *str++;
                res_index++;
            }
        }
        if (temp_index >= 0) {
            for (int j = 0; j < len_replace; j++) {
                result[res_index] = *replace++;
                res_index++;
            }
        }
        str += len_sub;
        replace -= len_replace;
    }
    return result;
}

//int main() {
//    char *res = mx_replace_substr("Uru ru ru jaburbgv", "ru", "pp");
//    system("leaks untitled");
//    printf("%s\n", res);
//    return 0;
//}
