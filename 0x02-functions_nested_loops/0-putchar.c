#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
/**
 * print -Entry point
 *
 * Return: always 0 (success)
 */
int print(void)
{
	const char *message = "_putchar\n";
	
	write(1, message, strlen(message));
	return (0);
}


int main(void)
{
	print();
	return (0);
}
