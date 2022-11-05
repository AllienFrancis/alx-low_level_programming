#include "main.h"

/**
 * _isalpha - To test if a character is an English alphabet.
 * @c: check character
 * Return: 1 if the character is english character.
 * 0 if character is not an english character.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);

}
