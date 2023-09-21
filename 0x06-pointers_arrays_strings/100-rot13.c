#include "main.h"
/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string (str)
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			char base = (str[i] >= 'A' && str[i] <= 'Z') ? 'A' : 'a';

			str[i] = (str[i] - base + 13) % 26 + base;

		}
	}
	return (str);
}
