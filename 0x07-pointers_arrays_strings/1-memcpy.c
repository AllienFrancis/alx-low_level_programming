#include "main.h"

/**
 * _memcpy - Copies @s bytes from the memory area pointed to by @src into that pointed to by @dest.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
Return: A pointer to the destination buffer @dest.
*/
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
