/**
 * _putchar - writes the character c pto stdout
 * Return: Always 0
 */
#include <stdio.h>
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
