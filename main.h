#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct format - structure
 * @str: the type of the pointer
 * @f: the function
 */
struct format
{
	char *str;
	int (*f)();
};

typedef struct format st_f;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_string(char *str);
int print_percentage(void);
int print_int(int i);
int print_float(const double f);
int print_bin(int n);
int print_unsigned(unsigned int n);
int print_hex(int n);
int print_HEX(int n);
int print_oct(int n);
int print_pointer(unsigned int *n);






#endif
