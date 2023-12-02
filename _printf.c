#include "main.h"

int _printf(const char *format, ...)
{
	st_f st_va =
	{
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percentage}
	}
	va_list all_arg;
	int i;

	va_start(all_arg, format);

	if (format != NULL)
	{
		for (i = 0; i < 3; i++)
		{
			if (strcpm(format, st_va[i].str))
				st_va[i].f;
		}
	}
	return (0);
}
