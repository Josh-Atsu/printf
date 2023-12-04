#include "main.h"



int print_string(char *str)
{
	int i = 0, len;

	if (str == NULL)
	{
		return (0);
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
