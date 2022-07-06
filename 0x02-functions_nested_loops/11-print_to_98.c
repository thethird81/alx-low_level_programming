#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - absolute value
 * @i: - character
 * Return: 0 if caps 1 if lower case
 */

void print_to_98(int i)
{
	int j;

	if (i <= 100)
	{
	for (j = i ; j <= 100 ; j++)
	{
	printf("%d", j);

	if (j != 100)
	{
	_putchar (',');
	_putchar (' ');
	}
	}
	}
	else
	{
		for (j = i ; j >= 100 ; j--)
		{

			printf("%d", j);

		if (j != 100)
		{
		_putchar(',');
		_putchar(' ');
		}
		}

	}
}


