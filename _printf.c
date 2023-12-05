#include "main.h"

int _printf(const char *format, ...)
{
	
	int i, count = 0;
	

	if (format == NULL)
		return (0);
	for (i = 0; format[i] !=  '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch(format[++i])
			{
				case 'c':
				{
					print_char(va_arg(all_arg, int));
					break;
				}
				case 'd':
				{
					print_int(va_arg(all_arg, int));
					break;
				}
				case 'i':
				{
					print_int(va_arg(all_arg, int));
					break;
				}
				case 'f':
				{
					print_float(va_arg(all_arg, double));
					break;
				}
				case 's':
				{
					print_string(va_arg(all_arg, char *));
					break;
				}
				case '%':
				{
					print_percentage();
					break;
				}
				case 'u':
				{
					print_unsigned(va_arg(all_arg, unsigned int));
					break;
				}
				case 'x':
				{
					print_hex(va_arg(all_arg, int));
					break;
				}
				case 'X':
				{
					print_hex(va_arg(all_arg, int));
					break;
				}
				case 'o':
				{
					print_oct(va_arg(all_arg, int));
					break;
				}
				case 'p':
				{
					break;
				}
				default:
				{	
					_putchar(format[i - 1]);
					_putchar(format[i]);
					break;
				}
			}
			--i
			count++;
		}
		else
			_putchar(format[i + count]);
	}
	
	return (i);
}
