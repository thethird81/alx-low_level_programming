#include "main.h"



/**
 * print_most_numbers - checks cas
 * Return: 0 if caps 1 if lower case
 */



void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		if (i != 2 && i != 4)
		_putchar(i + '0');
	}
	_putchar(10);

}
