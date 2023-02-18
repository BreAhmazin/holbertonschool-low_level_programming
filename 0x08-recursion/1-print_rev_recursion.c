/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed in reverse
 * Return: Nada
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
