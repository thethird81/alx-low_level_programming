#include "main.h"



/**
 * print_line - checks cas
 * @n:num
 * Return: 0 if caps 1 if lower case
 */


void print_line(int n)
{
	int c;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 1; c <= n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
