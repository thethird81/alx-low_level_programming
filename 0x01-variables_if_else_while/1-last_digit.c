#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - dora korpar
 * Return: 0 if exited properly
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
	printf("Last digit of %i is %i and is greater than 5", n, last);
if (last == 0)
	printf("Last digit of %i is %i and is 0", n, last);
if (last < 6 && n != 0)
{
	printf("Last digit of %i is %i and is less than 6 not 0", n, last);
}
printf("\n");
return (0);
}
