#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    char *str;

    if (format == ((void *)0))
        return (-1);

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            count++;
        }
        else
        {
            i++;

            if (format[i] == 'c')
            {
                char c = va_arg(args, int);

                write(1, &c, 1);
                count++;
            }
            else if (format[i] == 's')
            {
                str = va_arg(args, char *);

                if (str == ((void *)0))
                    str = "(null)";

                while (*str)
                {
                    write(1, str, 1);
                    str++;
                    count++;
                }
            }
            else if (format[i] == '%')
            {
                write(1, "%", 1);
                count++;
            }
            else
            {
                write(1, "%", 1);
                write(1, &format[i], 1);
                count += 2;
            }
        }

        i++;
    }

    va_end(args);

    return (count);
}
