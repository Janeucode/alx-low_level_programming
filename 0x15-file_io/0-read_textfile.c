#include "main.h"
#define NULL ((void *)0)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Entry point
 * @filename: name of file
 * @letters: letters to be read
 * Description: read text file and return whats read
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytes_read;
	char *buffer;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	fclose(file);
	if (bytes_written < 0 || bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
