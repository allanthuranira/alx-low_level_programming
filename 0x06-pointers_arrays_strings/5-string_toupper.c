#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	char str[] = "Look up!\n";
	char *ptr = *str;
	char STR[] = toupper(str);

	_putchar(STR);
	_putchar(*ptr);

	return (0);
}
