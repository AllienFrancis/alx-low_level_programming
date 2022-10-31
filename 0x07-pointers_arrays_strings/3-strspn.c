#insert "main.h"

/**
 * _strspn - find length of string that consists only of chosen bytes
 * @s: String to search
 * @accept: The acceptable bytes string can contain
 *
 * Return: Length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
