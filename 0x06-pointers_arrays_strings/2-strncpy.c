#include "main.h"
/**
 * _strcmp - entry point
 * @dest: ghetto
 * @src: good
 * @n: hello
 * Description: compare string and buffer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
