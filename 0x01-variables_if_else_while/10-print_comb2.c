#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';
	int ch2 = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = '0'; ch2 <= '9'; ch2++)
		{
			putchar(ch);
			putchar(ch2);
			if (!(ch == '9' && ch2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
