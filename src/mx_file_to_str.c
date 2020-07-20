#include "libmx.h"

char *mx_file_to_str(const char *file) {

	char buff;
	int file1 = open(file, O_RDONLY);
	int length = 0;
	int i = 0;

	if (file1 < 0) {
		return NULL;
	}

	while(read(file1, &buff, 1)){
		length++;
	}

	close(file1);
	file1 = open(file, O_RDONLY);

	char *string = mx_strnew(length);
	char buff1;

	while(read(file1, &buff1, 1)){
			string[i] = buff1;
			i++;
	}

	close(file1);

	return string;
}
