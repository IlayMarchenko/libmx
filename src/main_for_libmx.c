#include "libmx.h"

static bool mx_check(void *a, void *b) {
    if (a > b)
        return true;
    return false;
}

int main(int argc, char const *argv[]) {

    int number_of_function;
    bool in_loop = true;
    char array[60][30] = {"mx_printchar.c", "mx_print_unicode.c", "mx_printstr.c", "mx_print_strarr.c", "mx_printint.c", "mx_pow.c", "mx_sqrt.c",
        "mx_nbr_to_hex.c", "mx_hex_to_nbr.c", "mx_itoa.c", "mx_foreach.c", "mx_binary_search.c", "mx_bubble_sort.c", "mx_quicksort.c",
        "mx_strlen.c",  "mx_swap_char.c", "mx_str_reverse.c", "mx_strdel.c", "mx_del_strarr.c", "mx_get_char_index.c", "mx_strdup.c",
        "mx_strndup.c", "mx_strcpy.c", "mx_strncpy.c", "mx_strcmp.c", "mx_strcat.c", "mx_strstr.c", "mx_get_substr_index.c",
        "mx_count_substr.c", "mx_count_words.c", "mx_strnew.c", "mx_strtrim.c", "mx_del_extra_spaces.c", "mx_strsplit.c", "mx_strjoin.c",
        "mx_file_to_str.c", "mx_read_line.c", "mx_replace_substr.c", "mx_memset.c", "mx_memcpy.c", "mx_memccpy.c", "mx_memcmp.c",
        "mx_memchr.c", "mx_memrchr.c", "mx_memmem.c", "mx_realloc.c", "mx_create_node.c", "mx_push_front.c",
        "mx_list_size.c", "mx_memmove.c", "mx_push_back.c", "mx_pop_front.c", "mx_pop_back.c", "mx_sort_list.c", "mx_intlen.c",
        "mx_printerr.c", "mx_in_alphabet.c", "mx_is_number.c", "mx_to_lower.c", "mx_to_upper.c"};

    for (int i = 0; i < 60; i++) {
        mx_printint(i);
        mx_printchar(' ');
        mx_printstr(array[i]);
        mx_printchar('\n');
    }
    while (in_loop) {

        mx_printstr("\nwrite -1 if you want to finish assessment \n");
        mx_printstr("choose the number to check the function : ");
        scanf("%d", &number_of_function);

        if (number_of_function == -1) {
            in_loop = false;
        }
        else if (number_of_function == 0) {  // printchar
            mx_printchar('a');
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 1) { // print_unicode
            mx_print_unicode(L'æ');
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 2) { // printstr
            mx_printstr("hello");
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 3) { // print_strarr
            char *arr1[] = {"Hello", "Mike", "how", "are", "you ?", NULL};
            mx_print_strarr(arr1, " ");
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 4) { // printint
            mx_printint(-1234);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 5) { // pow
            mx_printstr("2 in power of 3 = ");
            int x = (int) mx_pow(2, 3);
            mx_printint(x);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 6) { // sqrt
            int x = mx_sqrt(36);
            mx_printint(x);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 7) { // nbr_to_hex
            mx_printstr("100 in hex is : ");
            char *x = mx_nbr_to_hex(100);
            mx_printstr(x);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 8) { // hex_to_nbr
            mx_printstr("hex 64 in nbr is : ");
            int x = (int) mx_hex_to_nbr("64");
            mx_printint(x);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 9) { // itoa
            char *test = mx_itoa(-2147483648);
            mx_printstr(test);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 10) { // foreach
            int arr[5] = {1, 2, 3, 4, 5};
            mx_foreach(arr, 5, mx_printint);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 11) { // binary_search
            int count = 0;
            char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
            mx_printstr("\nindex of string in array is : ");
            mx_printint(mx_binary_search(arr, 6, "aBc", &count));
            mx_printchar('\n');
            mx_printstr("number of required iterations to the count pointer : ");
            mx_printint(count);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 12) { // bubble_sort
            char *arr[] = {"abc", "xyz", "ghi", "def"};
            int a = mx_bubble_sort(arr, 4);
            mx_printint(a);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 13) { // quicksort
            char *arr[] = {"1234567", "123", "123456", "12345", "1234", "12", "1", NULL};
            mx_printstr("number of swap : ");
            mx_printint(mx_quicksort(arr, 0, 6));
            mx_printchar('\n');
            for (int i = 0; i < 7; ++i) {
                mx_printstr(arr[i]);
                mx_printchar('\n');
            }
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 14) { // strlen
            char *str = "hello";
            mx_printstr(str);
            mx_printchar('\n');
            mx_printint(mx_strlen(str));
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 15) { // swap_char
            char str[6] = "hello";
            mx_printstr(str);
            mx_printchar('\n');
            mx_swap_char(&str[0], &str[1]);
            mx_printstr(str);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 16) { // str_reverse
            char str[6] = "hello";
            mx_printstr(str);
            mx_printchar('\n');
            mx_str_reverse(str);
            mx_printstr(str);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 17) { // strdel
            char *str = mx_strnew(5);
            mx_strcpy(str, "hello");
            mx_printstr(str);
            mx_printchar('\n');
            mx_strdel(&str);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 18) { // del_strarr
            char **arr = (char **) malloc(sizeof(char *) * 4);
            for (int i = 0; i < 3; i++) {
                arr[i] = mx_strnew(5);
            }
            arr[0] = mx_strcpy(arr[0], "hello");
            arr[1] = mx_strcpy(arr[1], "rello");;
            arr[2] = mx_strcpy(arr[2], "mello");
            arr[3] = NULL;
            mx_del_strarr(&arr);
            mx_printchar('\n');
            system("leaks -q untitled");
        } else if (number_of_function == 19) { // get_char_index
            char *str = "hello";
            mx_printchar('\n');
            mx_printstr(str);
            mx_printchar('\n');
            mx_printstr("index of 'l' in string is : ");
            mx_printint(mx_get_char_index(str, 'l'));
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 20) { // strdup
            char str1[6] = "hello";
            char *str2 = mx_strdup(str1);
            mx_printstr("\nstring is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("clone of this string is : ");
            mx_printstr(str2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 21) { // strndup
            char str1[6] = "hello";
            char *str2 = mx_strndup(str1, 2);
            mx_printstr("\nstring is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("clone of first 2 characters is : ");
            mx_printstr(str2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 22) { // strcpy
            char str1[6] = "hello";
            char str2[6];
            strcpy(str2, str1);
            mx_printstr("\nstring is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("copy of string is : ");
            mx_printstr(str2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 23) { // strncpy
            char str1[6] = "hello";
            char str2[6];
            mx_strncpy(str2, str1, 2);
            mx_printstr("\nstring is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("copy of first 2 characters is : ");
            mx_printstr(str2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 24) { // strcmp
            char str1[6] = "hello";
            char str2[6] = "HELLO";
            mx_printstr("\nfirst string is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("second string is : ");
            mx_printstr(str2);
            mx_printchar('\n');
            mx_printstr("difference : ");
            mx_printint(mx_strcmp(str1, str2));
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 25) { // strcat
            char str1[6] = "hello";
            char str2[9] = " brother";
            mx_printstr("\nfirst string is : ");
            mx_printstr(str1);
            mx_printchar('\n');
            mx_printstr("second string is : ");
            mx_printstr(str2);
            mx_printchar('\n');
            mx_printstr("result of strcat : ");
            mx_printstr(mx_strcat(str1, str2));
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 26) { // strstr
            char haystack[20] = "TutorialsPoint.com";
            char needle[10] = "Point";
            char *res;
            res = mx_strstr(haystack, needle);
            mx_printstr("\nmain string : ");
            mx_printstr(haystack);
            mx_printstr("\nsub string : ");
            mx_printstr(needle);
            mx_printstr("\nresult is: ");
            mx_printstr(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 27) { // get_substr_index
            char haystack[20] = "TutorialsPoint.com";
            char needle[10] = "Point";
            int res;
            res = mx_get_substr_index(haystack, needle);
            mx_printstr("\nmain string : ");
            mx_printstr(haystack);
            mx_printstr("\nsub string : ");
            mx_printstr(needle);
            mx_printstr("\nresult is: ");
            mx_printint(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 28) { // count_substr
            char haystack[25] = "TutorialsPointPointPoint";
            char needle[10] = "Point";
            int res;
            res = mx_count_substr(haystack, needle);
            mx_printstr("\nmain string : ");
            mx_printstr(haystack);
            mx_printstr("\nsub string : ");
            mx_printstr(needle);
            mx_printstr("\nresult is: ");
            mx_printint(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 29) { // count_words
            char haystack[28] = "Tutorials Point Point Point";
            int res;
            res = mx_count_words(haystack, ' ');
            mx_printstr("\nmain string : ");
            mx_printstr(haystack);
            mx_printstr("\nresult is: ");
            mx_printint(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 30) { // strnew
            char *str = mx_strnew(10);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 31) { // strtrim
            char *s1 = "    \t hello my dear friend !   \t \n";
            mx_printstr(s1);
            mx_printchar('\n');
            char *s2 = mx_strtrim(s1);
            mx_printstr(s2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 32) { // del_extra_spaces
            char *s1 = "    \t hello     my   dear \tfriend !   \t \n";
            mx_printstr(s1);
            mx_printchar('\n');
            char *s2 = mx_del_extra_spaces(s1);
            mx_printstr(s2);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 33) { // strsplit
            char *str = "**Good buy,**Mr.*Anderson**";
            char **array = mx_strsplit(str, '*');
            mx_printstr("\n");
            mx_printstr(array[0]);
            mx_printstr(array[1]);
            mx_printstr(array[2]);
            mx_printstr("\n");
            system("leaks -q untitled");
        } else if (number_of_function == 34) { // strjoin
            char *str1 = "this";
            char *str2 = "dodge ";
            mx_printstr("\n");
            char *res = mx_strjoin(str2, str1);
            mx_printstr(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 35) { // file_to_str
            char *result = mx_file_to_str("../fragment");
            mx_printstr("\n");
            mx_printstr(result);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 36) { // read_line
            int fd = open("../fragment", O_RDONLY);
            char *str = NULL;
            str = mx_strnew(170);
            // 1
            int res = mx_read_line(&str, 30, 'f', fd);
            printf("res is %d\n", res);
            printf("%s\n", str);
            // 2
            res = mx_read_line(&str, 35, 't', fd);
            printf("res is %d\n", res);
            printf("%s\n", str);
            // 3
            res = mx_read_line(&str, 30, '.', fd);
            printf("res is %d\n", res);
            printf("%s\n", str);
            close(fd);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 37) { // file_to_str
            char *res = mx_replace_substr("Uru ru ru aaaaa", "ru", "pp");
            mx_printstr("\n");
            mx_printstr(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 38) { // memset
            char *str = mx_strnew(5);
            for (int i = 0; i < 5; ++i) {
                str[i] = 'r';
            }
            mx_printstr("\nbefore : ");
            mx_printstr(str);
            mx_printchar('\n');
            mx_memset(str, '%', 4);
            mx_printstr("\nafter : ");
            mx_printstr(str);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 39) { // memcpy
            const char src[50] = "1234567";
            char dest[50] = "http://www.tutorialspoint.com";
            mx_printstr("\n");
            mx_printstr("str before : ");
            mx_printstr(dest);
            mx_memcpy(dest, src, 7);
            mx_printstr("\n");
            mx_printstr("str after : ");
            mx_printstr(dest);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 40) { // memccpy
            const char src[50] = "1234567";
            char dest[50] = "http://www.tutorialspoint.com";
            mx_printstr("\n");
            mx_printstr("str before : ");
            mx_printstr(dest);
            mx_memccpy(dest, src, ':', 7);
            mx_printstr("\n");
            mx_printstr("str after : ");
            mx_printstr(dest);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 41) { // memcmp
            mx_printstr("\n");
            mx_printstr("difference between abc and ABC");
            mx_printint(mx_memcmp("abc", "ABC", 3));
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 42) { // memchr
            const char str[] = "http://www.tutorialspoint.com";
            const char ch = '.';
            char *ret;
            ret = mx_memchr(str, ch, mx_strlen(str));
            mx_printstr("\nString after ");
            mx_printchar(ch);
            mx_printstr(" is : ");
            mx_printstr(ret);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 43) { // memrchr
            const char str[] = "http://www.tutorialspoint.com";
            const char ch = '.';
            char *ret;
            ret = mx_memrchr(str, ch, mx_strlen(str));
            mx_printstr("\nString after last ");
            mx_printchar(ch);
            mx_printstr(" is : ");
            mx_printstr(ret);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 44) { // memmem
            char str[] = "http://www.tutorialspoint.com";
            char sub[] = "www";
            char *ret;
            ret = mx_memmem(str, mx_strlen(str), sub, mx_strlen(sub));
            mx_printstr("\nString : ");
            mx_printstr(str);
            mx_printstr("\nSub str : ");
            mx_printstr(sub);
            mx_printstr("\nResult is : ");
            mx_printstr(ret);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 45) { // realloc
            char *str = malloc(sizeof(char) * 10);
            for (int i = 0; i < 9; i++) {
                str[i] = '1';
            }
            str[9] = '\0';
            printf("%s\n", str);
            str = mx_realloc(str, 150);
            mx_memset(str + 9, '2', 140);
            mx_printstr(str);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 46) { // create_node
            t_list *head = mx_create_node("node created");
            mx_printstr("\n");
            mx_printstr(head->data);
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 47) { // push_front
            t_list *first = mx_create_node("1");

            mx_push_front(&first, "2");
            mx_push_front(&first, "3");
            mx_push_front(&first, "4");

            mx_printstr("\n\n");
            system("leaks -q untitled");

            while (first) {
                printf("%s\n", first->data);
                first = first->next;
            }
        } else if (number_of_function == 48) { // list_size
            t_list *first = mx_create_node("1");
            mx_push_back(&first, "2");
            mx_push_back(&first, "3");
            mx_push_back(&first, "4");
            int res = mx_list_size(first);
            mx_printstr("\n");
            mx_printstr("The number of item : ");
            mx_printint(res);
            mx_printstr("\n\n");
            system("leaks -q untitled");
            while (first) {
                printf("%s\n", first->data);
                first = first->next;
            }
        } else if (number_of_function == 49) { // memmove
            char d[] = "12345";
            char s[] = "linux";
            mx_printstr("\n");
            mx_printstr(mx_memmove(d, s, 4));
            mx_printstr("\n\n");
            system("leaks -q untitled");
        } else if (number_of_function == 50) { // push_back
            t_list *first = mx_create_node("1");

            mx_push_back(&first, "2");
            mx_push_back(&first, "3");
            mx_push_back(&first, "4");

            mx_printstr("\n\n");
            system("leaks -q untitled");

            while (first) {
                printf("%s\n", first->data);
                first = first->next;
            }
        } else if (number_of_function == 51) { // pop_front
            char *s1 = mx_strnew(1);
            char *s2 = mx_strnew(1);
            char *s3 = mx_strnew(1);
            char *s4 = mx_strnew(1);
            s1[0] = '1';
            s2[0] = '2';
            s3[0] = '3';
            s4[0] = '4';
            t_list *first = mx_create_node(s1);
            mx_push_back(&first, s2);
            mx_push_back(&first, s3);
            mx_push_back(&first, s4);
            mx_pop_front(&first);
            system("leaks untitled");
            while (first) {
                printf("%s\n", first->data);
                first = first->next;
            }
        } else if (number_of_function == 52) { // pop_back
            char *s1 = mx_strnew(1);
            char *s2 = mx_strnew(1);
            char *s3 = mx_strnew(1);
            char *s4 = mx_strnew(1);
            s1[0] = '1';
            s2[0] = '2';
            s3[0] = '3';
            s4[0] = '4';
            t_list *first = mx_create_node(s1);
            mx_push_back(&first, s2);
            mx_push_back(&first, s3);
            mx_push_back(&first, s4);
            mx_pop_back(&first);
            system("leaks untitled");
            while (first) {
                printf("%s\n", first->data);
                first = first->next;
            }
        } else if (number_of_function == 53) { // sort_list
            t_list *first = mx_create_node((void *) 3);
            mx_push_back(&first, (void *) 2);
            mx_push_back(&first, (void *) 6);
            mx_push_back(&first, (void *) 1);
            t_list *res = mx_sort_list(first, mx_check);
            mx_printchar('\n');
            system("leaks untitled");
            while (res) {
                printf("%p\n", res->data);
                res = res->next;
            }
        } else if (number_of_function == 54) { // intlen
            int a;
            mx_printstr("\nchoose any number : ");
            scanf("%d", &a);
            int res = mx_intlen(a);
            mx_printstr("\nlength of your number is : ");
            mx_printint(res);
            mx_printstr("\n\n");
            system("leaks untitled");
        } else if (number_of_function == 55) { //printerr
            mx_printerr("\nERROR !\n\n");
            system("leaks untitled");
        } else if (number_of_function == 56) { //in_alphabet
            char a;
            mx_printstr("\nchoose any character : ");
            scanf("%s", &a);
            if (mx_in_alphabet(a)) {
                mx_printstr("\nyour character in alphabet");
            } else {
                mx_printstr("\nyour character not in alphabet");
            }
            mx_printstr("\n\n");
            system("leaks untitled");
        } else if (number_of_function == 57) { // is_number
            char a;
            mx_printstr("\nchoose any character : ");
            scanf("%s", &a);
            if (mx_is_number(a)) {
                mx_printstr("\nyour character is a number");
            } else {
                mx_printstr("\nyour character is not a number");
            }
            mx_printstr("\n\n");
            system("leaks untitled");
        } else if (number_of_function == 58) { // mx_to_lower
            mx_printstr("\ngive me some string : ");
            char *str = mx_strnew(1000);
            scanf("%s", str);
            mx_to_lower(str);
            mx_printstr("\n\nlower case of this string : ");
            mx_printstr(str);
            mx_printstr("\n\n");
            system("leaks untitled");
        } else if (number_of_function == 59) { // mx_to_upper
            mx_printstr("\nGive me some string : ");
            char *str = mx_strnew(1000);
            scanf("%s", str);
            mx_to_upper(str);
            mx_printstr("\n\nUpper case of this string : ");
            mx_printstr(str);
            mx_printstr("\n\n\n");
            system("leaks untitled");
        }
    }
    mx_printstr("\n\nSomething wrong ? Give me your feedback in Slack 'imarchenko' or WhatsApp +380 63 599 64 22 \n\n");
    return 0;
}

