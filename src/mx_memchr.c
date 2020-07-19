#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {

	char *copy = (char *)s;
	int size = (int)n;

	for (int i = 0; i < size; i++) {
		if (*copy != c) {
			copy++;
		}
		else {
			break;
		}
	}

	return copy;
}

// int main() {
// 	const char str[] = "http://www.tutorialspoint.com";
//     const char ch = '.';
//     char *ret;

//     ret = mx_memchr(str, ch, mx_strlen(str));

//     printf("String after |%c| is - |%s|\n", ch, ret);
// 	return 0;
// }
