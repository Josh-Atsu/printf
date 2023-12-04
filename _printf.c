#include "main.h"

int _printf(const char *format, ...)
{
	va_list all_arg;
	int i;

	va_start(all_arg, format);

	if (format == NULL)
	{
		return (0);
	}
	for (i = 0; format[i] !=  '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
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
<<<<<<< HEAD
				case 'i':
				{
					print_int(va_arg(all_arg, int));
					break;
				}
=======
>>>>>>> 00868f67a4bc3cdd9590a63e7716b56af17844dd
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
				default:
				{
					/*_putchar(format[i]);*/
					break;
				}
			}
		}
		else
			{
				_putchar(format[i]);
			}
	}
	return (i);
}
