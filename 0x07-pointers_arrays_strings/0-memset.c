#include "main.h"
/**
 * _memset - Entry point
 * @s: pointer to memory area
 * @b: bytes to be inserted
 * @n: number of bytes to be inserted
 * Description: A function that fills memory with a constant byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
