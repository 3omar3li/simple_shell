#include "shell.h"

/**
 * _eputs - function that prints an input string
 * @str: function parameter
 * Return: void
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - function that writes the character c to stderr
 * @c: function parameter
 * Return: On success 1, On error -1
 */

int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}

/**
 * _putfd - function that writes the character c to given fd
 * @c: function parameter
 * @fd: function parameter
 * Return: On success 1, On error -1
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}

/**
 *_putsfd - function thats prints an input string
 * @str: function parameter
 * @fd: function parameter
 * Return: the number of chars put
 */

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
	{
		return (0);
	}
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
