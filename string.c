#include "shell.h"

/**
 * _strlen - function that returns the length of a string
 * @s: function parameter
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcmp - function that performs lexicogarphic comparison
 *	of two strangs
 * @s1: function parameter
 * @s2: function parameter
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 < *s2 ? -1 : 1);
	}
}

/**
 * starts_with - function taht checks if needle starts with haystack
 * @haystack: function parameter
 * @needle: function parameter
 * Return: address of next char of haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL);
		}
	}
	return ((char *)haystack);
}

/**
 * _strcat - function that concatenates two strings
 * @dest: function parameter
 * @src: function parameter
 * Return: pointer to destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (ret);
}
