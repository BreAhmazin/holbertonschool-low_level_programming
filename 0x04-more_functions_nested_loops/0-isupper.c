#include <stdio.h>
#include "main.h"
/**
 * _isupper - Is upper
 * Return : 1 or 0
 */

int _isupper(int c)

{
	char c;

	c = 'A';
putchar("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));

	c = 'a';
putchar("\nReturn value when another character %c is passed to isupper(): %d", c, isupper(c));

return 0;
}	
