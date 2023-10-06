#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_words - Count the number of words in a string.
 * Description: split word
 * @str: Input string.
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;
        	}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return count;
}
/**
 * strtow - Split a string into words.
 * @str: Input string.
 * Description: splitting
 * Return: Array of strings or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
	char **words;
	int num_words;
	int word_index = 0;
	int word_start = 0;
	int in_word = 0;
	int word_length;
	int i;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				word_length = str - word_start;
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i < word_index; i++)
						free(words[i]);
				}
					free(words);
                    			return NULL;
			}
			strncpy(words[word_index], word_start, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
			in_word = 0;
		}
		else if (!in_word)
		{
			word_start = str;
			in_word = 1;
		}
		str++;
	}
	if (in_word)
	{
		word_length = str - word_start;
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (int i = 0; i < word_index; i++) {
			free(words[i]);
		}
		free(words);
		return NULL;
	}
	strncpy(words[word_index], word_start, word_length);
	words[word_index][word_length] = '\0';
	word_index++;
	}
	words[word_index] = NULL;
	return words;
}
