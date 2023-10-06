#include <stdlib.h>
#define NULL ((void *)0)
/**
 * str_concat - Entry point
 * @s1: first string
 * @s2: second string
 * Description: concantate first and second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (int i = 0; i < len_s1; i++)
		result[i] = s1[i];
	for (int j = 0; j < len_s2; j++)
		result[len_s1 + j] = s2[j];
	result[len_s1 + len_s2] = '\0';
	return (result);
}
