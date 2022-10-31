#include "main.h"

/**
 * print_diagsums - Print the sums of the two diagnols of a matrix
 * @a: The matrix
 * @size: The length of the arrays
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c = c + *(a + i * sizeof(int));
	}

	for (j = 0; j < size; j++)

	{|
		d = d + *(a + (size * j) + (size - j - 1));
	}
	printf("%d, %d\n", c, d);
}
