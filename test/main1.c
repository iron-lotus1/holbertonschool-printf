#include <stdio.h>
#include "main.h"

int main(void)
{
	_printf("Character: %c\n", 'A');
	_printf("String: %s\n", "Holberton");
	_printf("Percent: %%\n");

	_printf("Integer: %d\n", 98);
	_printf("Integer: %i\n", 1024);

	_printf("Negative: %d\n", -12345);

	_printf("Zero: %d\n", 0);

	_printf("Multiple: %d %i %d\n", 10, -20, 300);

	printf("\nUsing standard printf\n");
	printf("Integer: %d\n", 98);
	printf("Negative: %d\n", -12345);

	return (0);
}
