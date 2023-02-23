#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stand out
 *@c: The character to print
 * Return: on success 1 and -1 on error and errno is set appropriately
 */
int _putchar (char c)

{
	return (write(1, &c, 1));
}

