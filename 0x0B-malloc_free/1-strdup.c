#define NULL ((void *)0)
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: string to duplicate
 * Description: pointer to a new string
 * Return: char
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
