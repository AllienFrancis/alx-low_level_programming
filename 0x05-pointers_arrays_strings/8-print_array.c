#include <stdio.h>
#include "main.h"

/**
 * print_array - write an array followed by a new line.
 * @a: array to be printed
 * @n: number pf elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{ int t;

	for (t = 0; t < n; t++)
	{
		if (t == 0)
		{
			printf("%d", a[t]);
		}
		else
		{
			printf(", %d", a[t]);
		}
	}
	printf("\n");
}
