#include "main.h"
/**
 * rot13 - Encode a string using ROT13
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string (str)
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		char is_uppercase = (c >= 'A' && c <= 'Z') ? 1 : 0;
		char is_lowercase = (c >= 'a' && c <= 'z') ? 1 : 0;

		if (is_uppercase || is_lowercase)
		{
			for (j = 0; input[j] != '\0'; j++)
			{
				if (c == input[j])
				{
					str[i] = (is_uppercase) ? output[j] : output[j + 26];
					break;
				}
			}
		}
	}
	return (str);
}
