#include "main.h"

int print_int(const int n)
{
	_putchar(n + '0');
	return(write(1, &n, 4));
}
