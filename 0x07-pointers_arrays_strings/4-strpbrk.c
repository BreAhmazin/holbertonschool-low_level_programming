/**
 * _strpbrk - locates the first
 * occurrence in the string s
 * @s: string
 * @accept: bytes or memory location
 * Return: Always 0
 */
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
