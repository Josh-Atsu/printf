#include "main.h"
<<<<<<< HEAD
#include <stdio.h>


int print_int(int n)
{
	int nb, last_digit, digit, len = 1;
	int  count = 0;

	last_digit = (n % 10);

	n = n / 10;
	nb = n;

	if (n != 0)
	{

		if (last_digit < 0)
		{
			_putchar('-');
			nb = -nb;
			n = -n;
			last_digit = -last_digit;
			count++;
		
		}
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
	}
	else
	{
	_putchar('0');
	return (1);
	}

	return (count);
}

=======

int print_int(int n)
{
	int last;

	if (n > 9)
	{
		putchar(last + '0');
	}
	return(0);
}
>>>>>>> 00868f67a4bc3cdd9590a63e7716b56af17844dd
