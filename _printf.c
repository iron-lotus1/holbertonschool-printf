#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = 0;
	count = 0;

	while (format[i] != '\0')
	{
		/* Normal character */
		if (format[i] != '%')
		{
			count += print_char(format[i]);
		}
		else
		{
			/* Move to the character after '%' */
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;

				case 's':
					count += print_string(va_arg(args, char *));
					break;

				case '%':
					count += print_char('%');
					break;

				default:
					count += print_char('%');
					count += print_char(format[i]);
					break;
			}
		}

		i++;
	}

	va_end(args);

	return (count);
}
