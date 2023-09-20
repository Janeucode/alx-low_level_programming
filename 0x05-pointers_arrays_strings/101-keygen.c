#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 10
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	srand((unsigned int)time(NULL));
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

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

