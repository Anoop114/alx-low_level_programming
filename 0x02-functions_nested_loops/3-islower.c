#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check if a char is lowercase
 * @c: the value
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	int r;

	if (islower(c) == true)
		r = 1;
	else
		r = 0;
	return (r);
}
