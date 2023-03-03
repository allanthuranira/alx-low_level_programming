#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
<<<<<<< HEAD
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
=======
	char str[] = "Look up!\n";
	char *ptr = *str;
	char STR[] = toupper(str);

	_putchar(STR);
	_putchar(*ptr);

	return (0);
>>>>>>> d455ec1dcb59e234ca8eab1035989260d151a802
}

