#include "main.h"
#include <stdbool.h>
/**
 * is_separator - Check if a character is a word separator
 * @c: The character to check
 *
 * Return: true if c is a separator, false otherwise
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - Capitalize the first letter of each word in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string (str)
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
		i++;
	}
	return (str);
}
