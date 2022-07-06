#include "main.h"

/**
 * times_table - nine_times_table
 * Return: 0 if caps 1 if lower case
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i <= 9 ; i++)
	{
		l = 1;
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;

			if (k < 10)
			{
				if (l == 0)
				{
					_putchar(',');
					_putchar('.');
					_putchar('.');
				}
				_putchar(k + '0');
				l = 0;
			}
			else
			{
				_putchar(',');
				_putchar('.');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar(10);
	}







