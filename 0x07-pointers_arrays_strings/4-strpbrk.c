#include "main.h"

/**
 * _strpbrk - function used to searche a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 * Return NULL (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
