/**
 * main - Entry point
 * Description: Prints a Fizz Buzz program
 * Return: Always 0 (Success)
 */
#include "main.h"
#include <stdio.h>

int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
	if ((b % 3 == 0) && (b % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (b % 5 == 0)
	{
	printf("Buzz");
	}
	else if (b % 3 == 0)
	{
	printf("Fizz");
	}
	else
	{
	printf("%d", b);
	}
	if (b != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
