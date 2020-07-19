#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    return mx_memcpy(dst, src, len);
}

//int main() {
//    char d[] = "12345";
//    char s[] = "linux";
//    printf("%s\n", mx_memmove(d , s, 4));
//}
