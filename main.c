#include "main.h"


int main(void)
{
	int age = 25;
	double pi = 3.14;
	int numbers[] = {1, 2, 3, 4, 5};
	long unsigned int i;

	_printf("My name is %s and I am %d years old.\n", "Snehasish", age);
	_printf("The value of pi is %.2f.\n", pi);
	/* Print a date and time.*/
	_printf("%s %s\n", "Today is", __DATE__);
	_printf("%s %s\n", "The time is", __TIME__);/* Print a list of numbers.*/
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
	{
		_printf("%d\n", numbers[i]);
	}
	/* Print a table of data.*/
	_printf("| Name | Age | Occupation |\n");
	_printf("| Snehasish | 25 | AI Engineer |\n");
	_printf("| Alice | 30 | Software Engineer |\n");
	return (0);
}
