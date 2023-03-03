#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copying to destination
 * @src: string being copied to dest
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{

	char dest [7] = "hello\0";
	char src [7] = "world!\n";
	char *dest = strcat(char dest, char src);
	char *ptr = *dest;
	_putchar(*dest);
	_putchar(*ptr);

	return (dest);
}
