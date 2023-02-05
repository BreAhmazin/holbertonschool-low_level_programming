/**
 * print_most_numbers - Prints out numbers
 * Return: Always 0
 */
#include "main.h"
void print_most_numbers(void)

{
	int b;
for (b = 0; b <= 9; b++)
	{
	if (b != 2 && b != 4)
	_putchar (b + '0');
	}
	_putchar('\n');
return;
}
