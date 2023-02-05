/**
 * more_numbers - prints out numbers
 * Return: Always 0
 */
#include "main.h"

void more_numbers(void)
{
	int z;
	int b;
for (b = 0; b < 10; b++)
{
	for (z = 0; z <= 14; z++)
	{
		if (z > 9)
		{
		_putchar((z / 10) + '0');
		}
	_putchar((z % 10) + '0');
}
_putchar('\n');
}
}
