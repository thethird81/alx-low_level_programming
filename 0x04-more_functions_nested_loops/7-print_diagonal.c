#include "main.h"



/**
 * print_diagonal - checks cas
 * @n:num
 * Return: 0 if caps 1 if lower case
 */


void print_diagonal(int n)

{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

}
