#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Entry point
 * @filename: name of file
 * @text_content: content text for file
 * Description: create file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	size_t text_length;
	ssize_t bytes_written;
	int file_descriptor;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, text_length);

		if (bytes_written != (ssize_t)text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
