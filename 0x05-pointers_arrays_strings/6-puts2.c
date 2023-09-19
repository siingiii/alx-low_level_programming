#include "main.h"
/**
 * put2 - function should print every other character of a string
 * @str: funtion parameter
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
