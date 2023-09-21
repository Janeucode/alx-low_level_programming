/**
 * string_toupper - Convert lowercase letters to uppercase in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string (str)
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}