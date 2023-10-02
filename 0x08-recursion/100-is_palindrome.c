#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - Entry point
 * Description: help
 * @s: string
 * @start: begin
 * @end: close
 * Return: int
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Entry point
 * Description: help
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
		return (1);
	return (is_palindrome_helper(s, 0, length - 1));
}
