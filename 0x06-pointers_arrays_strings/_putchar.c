#include <unistd.h>
/**
 * _putchar - print like putchar
 *
 * Return: 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
