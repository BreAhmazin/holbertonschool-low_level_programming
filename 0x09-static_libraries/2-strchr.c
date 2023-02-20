/**
 * _strchr - Entry
 * @s: string
 * @c: character
 * Return: Always 0
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
char *_strchr(char *s, char c)
{
	return strchr(s, c);
}
