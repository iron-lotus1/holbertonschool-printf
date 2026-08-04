#include "main.h"

/**
 * print_char - prints one character
 * @c: character
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
 * @str: string
 *
 * Return: number of printed characters
 */
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}

/**
 * print_int - prints an integer
 * @n: integer to print
 *
 * Return: number of printed characters
 */
int print_int(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += print_char('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	if (num / 10)
		count += print_int(num / 10);

	count += print_char((num % 10) + '0');

	return (count);
}
