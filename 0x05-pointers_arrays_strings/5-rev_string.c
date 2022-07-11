#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;

	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
 * _strlen - counts the length of a string
 * @s: string to  be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * swap_char - swaps the values of two char
 * @a: value to be swapped
 * @b: value to be swapped
 *
 * Return: void
 **/
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
