#include "main.h"

/**
 * print_times_table - prints the times table for n.
 * @n: the multiplication table requested
 * @res: the product of two integers
 * Return: nothing
 */

void print_times_table(int n)
{
	int i = 3;
	int j = 2;
	int res = (i * j);

	if (!(n > 15 || n < 0))
	{
		for (j = 0; j <= n; j++)
		{
			for (j = 0; j <= n; j++)
			{
				res = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');

				}
				if (res < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && j != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
