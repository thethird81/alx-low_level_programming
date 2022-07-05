#include "main.h"

/**
 * print_sign - print_sign
 * @n: - character
 * Return: 0 if caps 1 if lower case
 */

int print_sign(int n);
{
if (n > 0)
{
return (1);
_putchar ('+');
}

else if (n == 0)
{
return (0);
_putchar (0);
}
else
{
return (-1);
_putchar ('-');
}
}
