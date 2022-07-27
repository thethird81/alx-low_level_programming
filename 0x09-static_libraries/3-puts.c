#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: void
 **/
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
