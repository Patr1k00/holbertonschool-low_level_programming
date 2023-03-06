#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: the string to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
