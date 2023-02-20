/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: None
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
