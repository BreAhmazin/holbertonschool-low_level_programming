/**
 * print_square - draws a square!
 * @size: smedium
 * Return: Always 0
 */
#include "main.h"
void print_square(int size)

{
char square = '#';
int c1;
int c2;
if (size > 0)
{
for (c1 = 0; c1 < size; c1++)
	{
	for (c2 = 0; c2 < size; c2++)
	{
		_putchar(square);
	}
	_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
