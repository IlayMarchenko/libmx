#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	int size = n;
	char *res = (char *)dst;
	char *donor = (char *)src;

	for (int i = 0; i < size; i++) {
		if (res[i] == c) {
			break;
		}
		res[i] = donor[i];
	}
	return res;
}

// int main() {
// 	const char src[11] = "1234567890";
// 	char dest[50] = "http://www.tutorialspoint.com";
// 	mx_memccpy(dest, src, 'z',10);
// 	printf("%s\n", dest);
// 	return 0;
// }
