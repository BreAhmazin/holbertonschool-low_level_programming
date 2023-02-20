/**
 * _strstr - terminator
 * @haystack: string
 * @needle: needy
 * Return: Always 0
 */
#include "main.h"
#include <string.h>
char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}
