#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if ((n == 2) || (n == 4))
		{
			;
		}
		else
		{
			_putchar(n + 48);
		}
	}
	_putchar(10);
}
