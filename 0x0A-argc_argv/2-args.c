/**
 * main - print all arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: None
 */
#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
