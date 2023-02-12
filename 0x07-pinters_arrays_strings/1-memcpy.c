/**
 * _memcoy - Entry point
 * @dest: input
 * @src: input
 * @n: something
 * Return: Always 0
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
