/**
 * _strpbrk - locates the first
 * occurrence in the string s
 * @s: string
 * @accept: bytes or memory location
 * Return: Always 0
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}
