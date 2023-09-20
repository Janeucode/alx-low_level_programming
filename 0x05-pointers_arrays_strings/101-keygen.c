#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	srand((unsigned int)time(NULL));
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_size = sizeof(charset) - 1;
	printf("Generated Password: ");
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % charset_size;
		char random_char = charset[random_index];
		putchar(random_char);
	}
	printf("\n");
	return (0);
}

