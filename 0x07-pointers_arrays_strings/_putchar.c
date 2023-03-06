#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print out
 * Return: 1 on success and 0 otherwise
 */
int (_putchar(char c)
		{
		return (write(1, &c, 1));
		}

