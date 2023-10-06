#define NULL ((void *)0)
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Entry point
 * @ac: first
 * @av: second
 * Description: like that
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int j;
	int k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			result[k++] = av[i][j++];
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
