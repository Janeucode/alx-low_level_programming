#include <unistd.h>
/**
 * positive_or_negative - Entry point
 *
 * Return: 0
 */

int positive_or_negative(char c)
{
	return (write(1, &c, 1));
}
