/**
 * print_diagnol - it draws!
 * @n: an incrementor
 * Return: Always 0
 */
#include "main.h"
void print_diagonal(int n)

{
char line = '\\';
int b = 0;
int c = 0;

if (n > 0)
{
	for (; b < n; b++)
	{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar(line);
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
