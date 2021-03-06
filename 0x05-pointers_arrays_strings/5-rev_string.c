#include "holberton.h"

/**
 * print_rev - writes a string in reverse followed by a new line
 * @s:  the string to be written
 * Return: Always 0
 */

void print_rev(char *s)
{
	int v = 0;
	char *p;

	p = &s;

	while (v >= 0)
	{
		if (*(s + v) == '\0')
			break;
		v++;
	}
	while (v >= 0)
	{
		*p[v] = *(s + v);
		v--;
	}
	_putchar('\n');
}
