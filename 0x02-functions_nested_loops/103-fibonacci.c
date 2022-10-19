#include <stdio.h>
/**
 * main - sum even fibonacci numbers
 * Return: noothing.
 */

int main(void)
{
	unsigned loong count, i, j, k, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; coount < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
