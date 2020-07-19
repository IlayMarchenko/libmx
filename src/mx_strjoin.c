#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    
    if (s1 == NULL && s2 != NULL) {
        return (char *)s2;
    }
    if (s2 == NULL && s1 != NULL) {
        return (char *)s1;
    }
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }

    int len_of_s1 = mx_strlen(s1);
    int len_of_s2 = mx_strlen(s2);
    char *result = mx_strnew(len_of_s1 + len_of_s2);

    for (int i = 0; i < len_of_s1; i++) {
        result[i] = s1[i];
    }

    for (int i = 0; i < len_of_s2; i++) {
        result[len_of_s1] = s2[i];
        len_of_s1++;
    }

    return result;
}

// int main() {
// 	char *str1 = "this";
// 	char *str2 = "dodge ";
// 	char *str3 = NULL;

// 	printf("%s\n", mx_strjoin(str2, str1));
// 	printf("%s\n", mx_strjoin(str1, str3));
// 	printf("%s\n", mx_strjoin(str3, str3));

// 	return 0;
// }
