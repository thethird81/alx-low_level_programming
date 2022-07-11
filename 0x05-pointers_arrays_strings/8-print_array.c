#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array to stdout
 * @a: array to be printed
 * @n: limit
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
