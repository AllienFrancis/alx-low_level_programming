#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled.

 * Return: A pointer to the filled memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
