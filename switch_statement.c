#include "main.h"
/**
 * 
*/

int switch_statement(const char *format, ...)
{
	va_list all_arg;
	char fmt;

	fmt = va_arg(all_arg, format);
	
	va_start(all_arg, format);

	switch (fmt)
		{
			case 'c':
				print_char(va_arg(all_arg, int));
				break;
			case 'd':
				print_int(va_arg(all_arg, int));
				break;
			case 'i':
				print_int(va_arg(all_arg, int));
				break;
			case 'f':
				print_float(va_arg(all_arg, double));
				break;
			case 's':
				print_string(va_arg(all_arg, char *));
				break;
			case '%':
				print_percentage();
				break;
			case 'u':
				print_unsigned(va_arg(all_arg, unsigned int));
				break;
			case 'x':
				print_hex(va_arg(all_arg, int));
				break;
			case 'X':
				print_hex(va_arg(all_arg, int));
				break;
			case 'o':
				print_oct(va_arg(all_arg, int));
				break;
			case 'p':
				print_pointer(va_arg(all_arg, unsigned int *));
				break;
		}
		va_end(all_arg);
		return (0);
}