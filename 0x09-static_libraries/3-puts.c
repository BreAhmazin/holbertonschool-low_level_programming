/**
 * _puts - prints string
 * @str: the string
 * Return: None
 */
#include "main.h"
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
