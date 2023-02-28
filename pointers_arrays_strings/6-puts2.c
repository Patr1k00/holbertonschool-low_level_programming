/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 *
 * Return: void
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
