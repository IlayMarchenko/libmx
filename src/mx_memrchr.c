#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {

	char *copy = (char *)s;
	int size = (int)n;
	int i = 0;

	// check if we have such character in string
	if (mx_get_char_index(copy, c) < 0) {
		return NULL;
	}

	// find index of the last such character
	for (i = size; i >= 0; i--) {
		if (copy[i] == c) {
			break;
		}
	}

	// move pointer to the our character
	for (int j = 0; j < i; j++) {
		copy++;
	}

	return copy;
}

// int main() {
// 	const char str[] = "http://www.tutorialspoint.com";
//     const char ch = '.';
//     char *ret;

//     ret = mx_memrchr(str, ch, mx_strlen(str));

//     printf("String after |%c| is - |%s|\n", ch, ret);
// 	return 0;
// }
