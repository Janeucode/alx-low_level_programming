#include "main.h"
/**
 * _atio - Entry point
 * Description: na hm sabi
 * @_atoi: na hinm know
 * Return - 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (*s != '+' && *s != ' ')
		{
			break;
		}

		s++;
	}
	return (result * sign);
}
