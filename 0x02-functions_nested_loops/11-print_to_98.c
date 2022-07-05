#include "main.h"

/**
 * print_to_98 - absolute value
 * @i: - character
 * Return: 0 if caps 1 if lower case
 */

void print_to_98(int i)
{
	int j;

	if (i <= 98)
	{
	for (j = i ; j <= 98 ; j++)
	{
	_putchar(j + '0');
	if (j != 98)
	{
	_putchar (',');
	_putchar (' ');
	}
	}
	}
	else
	{
		for (j = i ; j >= 98 ; j--)
		{
		_putchar(j + '0');
		if (j != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		}

	}
}


