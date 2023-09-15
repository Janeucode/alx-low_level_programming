#include "main.h"
/**_isdigit - checks for digits
 * @c: hold number
 * 
 * Return: 1 is number is present otherwise
 */
int _isdigit(int c)
{
	if (c >=48 && c <=57)
	{
		return (1);
	}
	return (0);
}
