#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a', letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
return (0);
}
