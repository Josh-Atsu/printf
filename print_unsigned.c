#include "main.h"

int print_unsigned(unsigned int n)
{
	int nb, last_digit, digit, len = 1;
	int  count = 0;

	last_digit = (n % 10);

	n = n / 10;
	nb = n;

	
		if (nb > 0)
		{
			while (nb / 10 != 0)
			{
				len = len * 10;
				nb = nb / 10;
				count++;
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


	return (count);
}
