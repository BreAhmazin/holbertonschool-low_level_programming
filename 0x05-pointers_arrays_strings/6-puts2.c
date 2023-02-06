/**
 * puts2 - Print every other charcter of a string
 * @str: The modified string
 * Return: Void
 */
#include "main.h"
void puts2(char *str)

{
	int c;
	int x = 0;

	while (str[x] != '\0')
	{
	x++;
	}

	for (c = 0; c < x; c += 2)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}
