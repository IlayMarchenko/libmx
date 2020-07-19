#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *result = NULL;
    result = mx_strnew(n);
    int b = n;

    for (int i = 0; i < b; ++i) {
    	result[i] = s1[i];
    }

    return result;
}

// int main() {
// 	char *s = "hello";
// 	printf("%s\n", mx_strndup(s, 5));
// 	return 0;
// }
