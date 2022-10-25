#include "main.h"

/**
 * puts2 - printing one character out of two of a string
 * @str: the string containing characters'
 * Return: nothing
 */

void puts2(char *str)
{
	int c = 0;
	int n;

	for (n = 0; str[n] != 0; n++)
	{
	}

	for (c = 0; c < n; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}

	_putchar(10);

}
