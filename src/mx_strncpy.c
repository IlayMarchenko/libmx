#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, size_t len) {
   int size = len;
   char *donor = (char *)src;

   for (int i = 0; i < size; i++) {
       dst[i] = donor[i];
   }
   return dst;
}

// int main () {
//    char src[40];
//    char dest[30];

//    mx_memset(dest, '\0', sizeof(dest));
//    mx_strcpy(src, "This is tutorialspoint.com");
//    mx_strncpy(dest, src, 20);

//    printf("Final copied string : %s\n", dest);

//    return(0);
// }

