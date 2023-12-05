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
			switch_statement(format[i + 1]);
			count++;
		}
		else
			_putchar(format[i + count]);
	}
	
	return (i);
}
