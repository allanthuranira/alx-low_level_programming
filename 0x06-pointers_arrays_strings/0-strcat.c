#include "main.h"
<<<<<<< HEAD

/**
 * _strcat - a function that concatenates two strings
 * @dest: copying to destination
 * @src: string being copied to dest
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
=======
/** for concatenating two strings
 * string char
 * string dest
 */

char *_strcat(char *dest, char *src)
{
	char dest [7] = {'h','e','l','l','o', ' '};
	char src [7] = {'w','o','r','l','d','!','\n'};
	char *ptr = *dest;
	_putchar(*dest);
	_putchar(*ptr);
>>>>>>> a84b8b12aeb930064ba05abe8b69ff4c77f893db
}
