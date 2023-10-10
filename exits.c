#include "shell.h"

/**
 * _strncpy - function that copies a string
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - function that concatenates two strings
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (s);
}

/**
 * _strchr - function that locates a character in a string
 * @s: function parameter
 * @c: function parameter
 * Return: (s) a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	}
	while (*s++ != '\0');

	return (NULL);
}
