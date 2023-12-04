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
int print_char(char c);
int print_string(char *str);
int print_percentage(void);
<<<<<<< HEAD
int print_int(int i);
=======
int print_int(const int n);
>>>>>>> 00868f67a4bc3cdd9590a63e7716b56af17844dd
int print_float(const double f);




#endif
