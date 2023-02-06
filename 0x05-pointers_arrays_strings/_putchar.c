/**
 * _putchar - writes the character c pto stdout
 */
#include "main.h"
#include <unistd.h>

int _putchar(char c)                                                {
	return (write(1, &c, 1));
}
