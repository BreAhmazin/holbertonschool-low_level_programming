/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers that will be reversed
 * @n: the number of elemnts in the array
 */
#include "main.h"
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
