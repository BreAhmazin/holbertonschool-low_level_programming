/**
 * _strcpy - cpoy a string
 * @dest: destination value
 * @src: source value
 * Return: dest
 */
#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
	dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
