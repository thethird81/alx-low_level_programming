#include "main.h"

/**
 *jack_bauer - absolute valu
 * Return: 0 if caps 1 if lower case
 */

void jack_bauer(void)
{



	int a, b, c, d, e;

	e = 9;


	for (a = 0 ; a <= 2 ; a++)
	{
		if (a == 2)
		{
			e = 3;
		}
		for (b = 0 ; b <= 3 ; b++)

			for (c = 0 ; c <= 5 ; c++)

				for (d = 0 ; d <= 9 ; d++)

				{

					_putchar(a + '0');

					_putchar(b + '0');

					_putchar(':');

					_putchar(c + '0');

					_putchar(d + '0');

					_putchar(10);

				}
	}
}


