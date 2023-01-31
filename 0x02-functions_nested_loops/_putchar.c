/**
 *_putchar - writes the character c to stdout
 *Return: On Sucess 1
 *On error, -1 is returned, and errno is set appropiately
 */
#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
