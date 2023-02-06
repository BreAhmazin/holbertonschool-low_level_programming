/**
 * puts_half - prints half
 * @str: printed string
 * Return: void
 */
#include "main.h"

void puts_half(char *str)
{
	int c = 0;
	int b;

	while (str[c] != '\0')
	{
	c++;
	}
	if (c % 2 == 1)
	{
	b = (c - 1) / 2;
	b += 1;
	}
	else
	{
	b = c / 2;
	}

	for (; b < c; b++)
	{
	_putchar(str[b]);
	}
	_putchar('\n');
}
