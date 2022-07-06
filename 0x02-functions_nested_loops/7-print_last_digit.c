#include "main.h"

/**
 * print_last_digit - absolute value
 * @c: - character
 * Return: 0 if caps 1 if lower case
 */

int print_last_digit(int c)
{
int n;
if (c < 0)
	if (c != -2147483648)
	{
	c = -c;
	n = c % 10;
	_putchar(n + '0');
	}
	else
	_putchar(8 + '0');
	return (n);

}


