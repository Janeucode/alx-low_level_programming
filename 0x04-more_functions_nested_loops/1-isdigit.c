#include "main.h"
/**_isdigit - checks for digits
 * @c: hold number
 * Description: for checking if numbers are present, use put char to print
 * Return: 1 if number is present otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}
	return (0);
}
