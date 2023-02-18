/**
 * _strlen_recursion - returns to me the length of a string
 * @s: the string being counted
 * Return: value
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
