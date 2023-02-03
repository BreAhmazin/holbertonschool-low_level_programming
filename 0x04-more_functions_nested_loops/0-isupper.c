#include <stdio.h>
#include "main.h"
/**
 * _isupper - Is upper
 * Return : 1 or 0
 * @c: is a letter
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
