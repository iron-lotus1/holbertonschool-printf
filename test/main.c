#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;

	len = _printf("Hello World\n");
	printf("\nCharacters printed = %d\n\n", len);

	len = _printf("Character: %c\n", 'A');
	printf("Characters printed = %d\n\n", len);

	len = _printf("String: %s\n", "Holberton");
	printf("Characters printed = %d\n\n", len);

	len = _printf("Percent sign: %%\n");
	printf("Characters printed = %d\n\n", len);

	len = _printf("NULL string: %s\n", NULL);
	printf("Characters printed = %d\n\n", len);

	len = _printf("Unknown: %q\n");
	printf("Characters printed = %d\n\n", len);

	return (0);
}
