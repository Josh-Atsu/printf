#include "main.h"

int print_unsigned(unsigned int n)
{
	int nb = 0, last_digit, digit, len = 1;
	int  count = 0;

	last_digit = (n % 10);

	n = n / 10;
	nb = n;

	
		if (nb > 0)
		{
			for (nb = n; nb / 10 != 0; count++)
			{
				len = len * 10;
				nb = nb / 10;

			}
			nb = n;
			while (len > 0)
			{
				digit = nb / len;
				_putchar(digit + '0');
				nb = nb - (digit * len);
				len = len / 10;
				count++;
			}
		}
		_putchar(last_digit + '0');


	return (0);
}
