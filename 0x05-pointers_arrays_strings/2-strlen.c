/**
 * _strlen - returns the length of a string
 * @str: string to get length of
 * Return: The length of @str
 */
#include <stdio.h>
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
