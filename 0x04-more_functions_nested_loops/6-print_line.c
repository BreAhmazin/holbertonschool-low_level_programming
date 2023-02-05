/**
 * print_line - draws a line
 * @n: an incrementor
 * Return: Always 0
 */
#include "main.h"

void print_line(int n)

{
char line = '_';
int b = 0;
if (n > 0)
{
	while (b < n)
	{
		_putchar(line);
		b++;
	}
}
_putchar('\n');
}
