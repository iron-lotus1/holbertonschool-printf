#include "main.h"

/**
 * print_char - prints one character
 * @c: character to print
 *
 * Return: 1
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: number of printed characters
 */
int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
