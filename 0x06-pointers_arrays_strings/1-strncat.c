#include "holberton.h"
/**
 * _strncat - Concatenates the first n characters from src to dest.
 *@dest: Destination value.
 *@src: Source value.
 *@n: Number of characters to concatenate.
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
