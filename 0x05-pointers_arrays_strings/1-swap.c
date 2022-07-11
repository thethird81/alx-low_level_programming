#include "main.h"

/**
 * swap_int - swaps
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
