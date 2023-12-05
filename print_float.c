#include "main.h"
/**
 * print_float - function to print a float
 * @f: the float to print
 * Return: 0
*/

int print_float(const double f)
{
	return (write(1, &f, 4));
}
