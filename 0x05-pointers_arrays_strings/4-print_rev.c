#include "main.h"
/**
 * print_rev - the function name
 * @s:function parameter
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count - i; i >= 0; i--)
	{
		_putchar(s[1]);
	}
	_putchar('\n');
}

