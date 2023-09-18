#include <unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * @c: collects character input
 * Description: print characters with _putchar
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
