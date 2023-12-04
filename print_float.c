#include "main.h"

int print_float(const double f)
{
	return (write(1, &f, 4));
}
