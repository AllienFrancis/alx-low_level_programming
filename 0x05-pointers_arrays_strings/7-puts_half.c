#include "Main.h"

/**
 * puts_half - the secong half is fun
 * @str: pointer is a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int x, y, z;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (z = x / 2; str[z] != '\0'; z++)
		{
			_putchar(str[z]);
		}

	}
	else if (x % 2)
	{
		for (y = (x - 1) / 2; y < x - 1; x++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar(10);
}
