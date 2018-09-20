#include "holberton.h"

<<<<<<< HEAD
void print_prev_digits(int n);

/**
 * print_number - prints a number using _putchar
 *
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9)
		print_prev_digits(n);
	_putchar((n % 10) + '0');
}

/**
 * print_prev_digits - recursive function to print all previous digits in num
 *
 * @n: number to print previous digits of
 * Return: void
 */
void print_prev_digits(int n)
{
	if ((n / 10) > 9)
	{
		print_prev_digits(n / 10);
		_putchar(((n / 10) % 10) + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
	}
}
=======
/**
 *
 *
 *
 */

>>>>>>> b63cc36f23e495b62a34c2c9b6ae27440d454dee
