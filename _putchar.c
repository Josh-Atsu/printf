#include "main.h"
/**
 * _putchar - Function to print char
 * @c: the char to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
