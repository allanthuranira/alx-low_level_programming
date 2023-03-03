#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copying to destination
 * @src: string being copied to dest
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{

	char dest [7] = {'h','e','l','l','o', ' '};
	char src [7] = {'w','o','r','l','d','!','\n'};
	char *ptr = *dest;
	_putchar(*dest);
	_putchar(*ptr);

	return (dest);
}
