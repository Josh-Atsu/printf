#include "main.h"



int print_char(va_list all_str)
{
	char str;

	str = va_arg(all_str, int);

	_putchar(str);

	return (0);


}
