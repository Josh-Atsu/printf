#include "main.h"


int print_percentage(va_list all_perc)
{
	char str;

	str = va_arg(all_perc, int);

	_putchar(str);

	return (0);
}