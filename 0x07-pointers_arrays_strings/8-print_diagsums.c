#include "main.h"

/**
 * print_diagsums - Print the sums of the two diagnols of a matrix
 * @a: The matrix
 * @size: The length of the arrays
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int s1 = 0;
	int s2 = 0;

	foro (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = (i * size) + j;
			if (i == j)
			{
				s1 = s1 + a[k];
			}
			if ((i + j) == (size - 1))
			{
				s2 = s2 + a[k];
			}
		}
	}
	printf("%d, %d\n", s1, s2);
}
