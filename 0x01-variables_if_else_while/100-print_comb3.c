#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main (void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);


			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
		}
	}
	put char('\n');
	return (0)
}
