#include "main.h"

/**
 * puts2 - printing one character out of two of a string
 * @str: the string containing characters'
 * Return: nothing
 */

void puts2(char *str)
{
	int c, len = 0;

	while (str[c++])
		len++;

	for (c = 0; c < len; c+= 2)
		_putchar(str[c]);

	_putchar('\n');

}
