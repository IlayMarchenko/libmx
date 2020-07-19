#include "libmx.h"

static bool space(char a) {
	if (a == ' ' || a == '\t' || a == '\r' || a == '\n' || a == '\v' || a == '\f') {
		return true;
	}
	return false;
}

char *mx_del_extra_spaces(const char *str) {

	if (!str) {
		return NULL;
	}

	char *result = mx_strnew(mx_strlen(str));
	int x = 0;
	char *sub_result = mx_strtrim(str);

	for (int i = 0; sub_result[i] != 0; i++) {
		if (!space(sub_result[i])) {
			result[x] = sub_result[i];
			x++;
		}
		else if (space(sub_result[i]) && !space(sub_result[i + 1])) {
			result[x] = ' ';
			x++;
		}
		else {
			continue;
		}
	}
	free(sub_result);
	result = (char *)realloc(result, sizeof(char) * mx_strlen(result) + 1);
    return result;
}

// int main() {
// 	char *s1 = "\thello    my          dear    \t     \tfriend !    \t\n  ";
// 	printf("%s\n", s1);

// 	char *s2 = mx_del_extra_spaces(s1);
// 	printf("%s\n", s2);
// 	s2++;

// 	system("leaks test"); 
// 	return 0;
// }
