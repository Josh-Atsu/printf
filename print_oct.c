#include "main.h"




int print_oct(int n)
{
	int i = 0;
	int *nb_oct;
	int count = 0;
	unsigned int nb = n;
	unsigned int initial_n = nb;

	while (nb / 8 != 0)
	{
		nb /= 8;
		count++;
	}
	count = count + 1;
	nb_oct = malloc(count * sizeof(int));

	while (i < count)
	{
		nb_oct[i] = initial_n % 8;
		initial_n /= 8;
		i++;
	}
	i = count - 1;

	while (i >= 0)
	{
		_putchar(nb_oct[i] + '0');
		i--;
	}
	free(nb_oct);
	
	return (0);
}



