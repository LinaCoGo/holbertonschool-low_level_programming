#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 *@s:string.
 *@c:first ocurrence of a character.
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
