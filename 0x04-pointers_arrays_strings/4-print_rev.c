#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - prints reverse of a string followed by a new line
 *
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	for (; i > 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
