#include "main.h"
/**
 * _memcpy - Entry point
 * @n: number of bytes to be copied
 * @src: the source byte to copy from
 * @dest: the destination where the bytes are to be copied to
 * Description: copy memory area
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (d);
}
