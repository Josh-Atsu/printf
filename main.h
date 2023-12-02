#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct format
{
	char *str;
	int (*f)();
};
typedef struct format st_f;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list all_c);
int print_string(va_list all_str);
int print_percentage(va_list all_perc);






#endif
