#include "main.h"
/**
 * wildcmp_helper - Entry point
 * Description: some
 * @s1: na ham
 * @s2: its it
 * Return: int
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' || (*s1 != '\0' && *s1 == *s2))
		return (wildcmp_helper(s1 + 1, s2 + 1) || wildcmp_helper(s1 + 1, s2));
	return (0);
}
/**
 * wildcmp - Entry point
 * Description: wild
 * @s1: first
 * @s2: second
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
