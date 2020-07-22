cmake_minimum_required(VERSION 3.16)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled libmx.h mx_printchar.c mx_printstr.c mx_print_strarr.c mx_printint.c mx_pow.c mx_sqrt.c
        mx_nbr_to_hex.c mx_hex_to_nbr.c mx_itoa.c mx_foreach.c mx_binary_search.c mx_bubble_sort.c mx_quicksort.c
        mx_strlen.c mx_swap_char.c mx_str_reverse.c mx_strdel.c mx_del_strarr.c mx_get_char_index.c mx_strdup.c
        mx_strndup.c mx_strcpy.c mx_strncpy.c mx_strcmp.c mx_strcat.c mx_strstr.c mx_get_substr_index.c
        mx_count_substr.c mx_count_words.c mx_strnew.c mx_strtrim.c mx_del_extra_spaces.c mx_strsplit.c mx_strjoin.c
        mx_file_to_str.c mx_read_line.c mx_replace_substr.c mx_memset.c mx_memcpy.c mx_memccpy.c mx_memcmp.c
        mx_memchr.c mx_memrchr.c mx_memmem.c mx_realloc.c mx_create_node.c mx_push_front.c
        mx_list_size.c mx_memmove.c mx_push_back.c mx_pop_front.c mx_pop_back.c mx_print_unicode.c mx_sort_list.c
        mx_in_alphabet.c mx_intlen.c mx_printerr.c main_for_libmx.c mx_is_number.c mx_to_lower.c mx_to_upper.c)

