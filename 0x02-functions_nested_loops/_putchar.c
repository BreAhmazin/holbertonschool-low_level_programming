/**
 *_putchar - writes the character c to stdout
 *Return: On Success 1.
 *On error, -1 is returned, and errno is set appropiately
 */
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
