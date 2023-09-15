#include "main.h"
/**_isdigit - checks for digits
 * @c: hold number
 * Description: for checking if numbers are present
 * Return: 1 is number is present otherwise
 */


int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
