/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string printing
 * Return: none
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
