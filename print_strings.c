#include "main.h"



int print_string(va_list all_str)
{
	char *str;
	int i = 0, len;

	str = va_arg(all_str, char *);

	if (str == '\0')
	{
		return (NULL);
	}

	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}

		return (len);
	}
}