#include "main.h"

/**
 * _putchar - write out6 charcters
 * @c: the character
 * Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
