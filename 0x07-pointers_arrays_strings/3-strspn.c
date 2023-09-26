#include "main.h"
/**
 * _strspn - Entry point
 * @s: the string
 * @accept: the substring
 * Description: for prefix
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;
	int isMatch;

	while (*s != '\0')
	{
		a = accept;
		isMatch = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				isMatch = 1;
				break;
			}
			a++;
		}
		if (!isMatch)
			break;
		count++;
		s++;
	}
	return (count);
}
