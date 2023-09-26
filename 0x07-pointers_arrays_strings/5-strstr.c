#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - Entry point
 * @haystach; to be located
 * @needle:warrants search
 * Description: locates a substring
 * Return: char or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char h;
	char n;

	while (*haystack != '\0')
	{
		*h = haystack;
		*n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
