#include "main.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: Memory area to copy to
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from memory area.
 *
 * Return: A pointer to the destination buffer
*/

char *_memcpy(char *dest, char *src, unsigned int  n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}

	return (dest);
}
