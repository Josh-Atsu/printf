#include "main.h"




int print_hex(int n)
{
	int i = 0;
	int *nb_hex;
	int count = 0;
	unsigned int nb = n;
	unsigned int initial_n = nb;

	while (nb / 16 != 0)
	{
		nb /= 16;
		count++;
	}
	count = count + 1;
	nb_hex = malloc(count * sizeof(int));

	while (i < count)
	{
		nb_hex[i] = initial_n % 16;
		initial_n /= 16;
		i++;
	}
	i = count - 1;
	while (i >= 0)
	{
		if (nb_hex[i] > 9)
		{
			nb_hex[i] = nb_hex[i] + 7;
		}
		_putchar(nb_hex[i] + '0');
		i--;
	}
	free(nb_hex);
	return (0);
}



