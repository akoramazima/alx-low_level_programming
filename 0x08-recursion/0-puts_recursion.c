#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: source string
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}

		_putchar(*s);
		_puts_recursion(s + 1);
}
