#include "main.h"
/**
 * _strncpy - entry point
 * @dest: ghetto
 * @src: good
 * @n: hello
 * Description: compare string and buffer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
