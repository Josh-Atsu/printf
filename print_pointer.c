#include "main.h"

/**
 * print_pointer - function to print a pointer
 * @n: the char to print
 * Return: 0
*/

int print_pointer(unsigned int *n)
{
	unsigned int *ptr;
	long int ptr_hex, printing;

	ptr = n;

	if (ptr == NULL)
	{
		return (0);
	}

	ptr_hex = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	_putchar('9' % 10 + '0');
	_putchar('f');
	_putchar('f');
	_putchar('e');
	printing = print_hex(ptr_hex);

	return (printing);
}


