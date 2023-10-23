#include "main.h"

/**
 * _strchr - Used to locate a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 * Return NULL (success)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
