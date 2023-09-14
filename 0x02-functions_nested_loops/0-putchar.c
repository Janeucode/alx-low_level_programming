#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int _pputchar(void)
{
	const char *message = "_putchar\n";
	
	write(1, message, strlen(message));
	return (0);
}


int main(void)
{
	_pputchar();
	return (0);
}
