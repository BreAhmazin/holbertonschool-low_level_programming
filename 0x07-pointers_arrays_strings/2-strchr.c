/**
 * _strchr - Entry
 * @s: string
 * @c: character
 * Return: Always 0
 */
#include "main.h"

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}

	return (NULL);
}
