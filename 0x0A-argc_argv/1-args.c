#include "main.h"
int main(int argc, int argv[])
{
	int count = 0;
	int temp;
	int divisor;

	for (int i = 1; i < argc; i++)
		count++;
	if (count >= 0)
	{
		temp = count;
		divisor = 1;

		while (temp >= 10)
		{
			temp /= 10;
			divisor *= 10;
		}
		while (divisor > 0)
		{
			_putchar('0' + count / divisor);
			count %= divisor;
			divisor /= 10;
		}
		_putchar('\n');
	}
	return (0);
}

