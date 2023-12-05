#include "main.h"

int _printf(const char *format, ...)
{
	va_list all_arg;
	int i, count = 0;
	va_start(all_arg, format);

	if (format == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
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
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					break;
			}
			i++;
		}
		else
			_putchar(format[i]);
		count += 1;
	}
	va_end(all_arg);
	return (count);
}
