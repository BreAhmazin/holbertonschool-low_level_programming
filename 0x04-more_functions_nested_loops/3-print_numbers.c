#include "main.h"
/**
 * print_numbers - prints put them numbers
 * Return: The numbers 0 up to 9
 */
void print_numbers(void)
{
	int b;
for (b = 0; b <= 9; b++)
	{
	_putchar(b + '0');
	}
	_putchar('\n');
}
