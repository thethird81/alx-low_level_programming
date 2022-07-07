#include "main.h"

/**
 * print_times_table - nine_times_table
 * Return: 0 if caps 1 if lower case
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int l;
	int a;

	a = n * n;

	if (n <= 15 && n > 0)

	{
		for (i = 0 ; i <= n ; i++)
		{
			l = 1;
			for (j = 0 ; j <= n ; j++)
			{
				k = i * j;
				if (a < 100)
				{
					if (k < 10)
					{
						if (l == 0)
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
						}
						printf("%d", k);
						l = 0;
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						printf("%d", k);
					}
				}
				else
				{
					if (k < 10)
					{
						if (l == 0)
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
						}
						printf("%d", k);
						l = 0;
					}
					else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						printf("%d", k);
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						printf("%d", k);
					}

				}
			}
			_putchar(10);
		}
	}
}




