#include "main.h"



int print_char(va_list all_c)
{
	char str;

	str = va_arg(all_c, int);

	_putchar(str);

	return (0);


}
