/**
 *main - Entry point
 *Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	int c;
	char a;
for (c = 0; c <= 9; c++)
{
	putchar('0' + c);
}
for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}
	putchar ('\n');
	return (0);
}
