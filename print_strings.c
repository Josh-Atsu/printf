#include "main.h"

/**
 * print_string - function to print a string
 * @str: the string to print
 * Return: 0
*/



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
