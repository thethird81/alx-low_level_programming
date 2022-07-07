#include "main.h"



/**
 * more_numbers - checks cas
 * Return: 0 if caps 1 if lower case
 */



void more_numbers(void)

{
	int i;
	int j;
	int k;

	for (i = 0; i <= 14 ; i++)
	{
		j = i * 10;
		k = j / 10;
		if (j < 10)
		{
		_putchar(j + '0');
		}
		if (j >= 10 && j < 100)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		else
		{
			_putchar(j / 100 + '0');
			-putchar(k %  10 + '0');
			_putchar(j % 10 + '0');
	}
	_putchar(10);

}
