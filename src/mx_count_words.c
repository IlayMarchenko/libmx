#include "libmx.h"

int mx_count_words(const char *str, char delimiter){
    int wordCount = 0;
    while(*str)
    {
        if (*str != delimiter)
            str++;
        else
        {
            wordCount++;
            while ( *str == delimiter)
                str++;
        }
    }
    if(*(str-1) == delimiter) wordCount--;
    else wordCount++;
    return wordCount;
}

