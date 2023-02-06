/*
 * fizz_buzz - Fizzy
 * main - Entry Point
 * Return: Always 0
 */
#include "main.h"
#include <stdio.h>

int main(void)
{
int n = 1;
for (; n <= 99; n++)
{
if (n % 15 == 0)
{
	printf("FizzBuzz");
}
else if (n % 5 == 0)
{
	printf("Buzz");
{
else if (n % 3 == 0)
{
	printf("Fizz");
}
else
{
	printf("%d", n);
	}
}
printf("Buzz");
printf("\n");
return (0);
}
