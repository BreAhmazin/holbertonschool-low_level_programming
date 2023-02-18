/**
 * factorial - compute the factorial of a number
 * @n: the number being used to compute factorial
 * Return: value
 */
#include "main.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
