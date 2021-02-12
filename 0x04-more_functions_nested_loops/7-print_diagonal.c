#include "holberton.h"
#include "holberton.h"

/**
 * print_diagonal - Print space \ by the given number (x).
 *@n: Given number.
 */
void print_diagonal(int n)
{

	int y;

	for (y = 0; y < n; y++)
	{
		print_line(y);
	}
}
void print_line(int n)
{
	int x = 0;


	for (x = 0; x < n; x++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
}
