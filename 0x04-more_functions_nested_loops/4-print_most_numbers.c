#include "holberton.h"
/**
 * print_most_numbers - Prints all numbers except for the ones given.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{

	int num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
			num++;
		}
		else
			num++;
	}
	_putchar('\n');
}
