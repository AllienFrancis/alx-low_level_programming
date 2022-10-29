#include "main.h"

/**
 * print_numbers - print number 0 to 9
 * @_putchar: use this implace of printf
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar(10);
}
