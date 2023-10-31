#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - Entry point
 * @filename: name of the file
 * @text_content: text to be appended
 * Description: append text to end of file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t text_length;
	size_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);
	text_length = strlen(text_content);
	bytes_written = fwrite(text_content, 1, text_length, file);

	fclose(file);
	if (bytes_written != text_length)
		return (-1);
	else
		return (1);
}
