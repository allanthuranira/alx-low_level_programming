#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> d455ec1dcb59e234ca8eab1035989260d151a802
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
<<<<<<< HEAD
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
=======

char *_strcat(char *dest, char *src)
{

	char dest [7] = "hello\0";
	char src [7] = "world!\n";
	char *dest = strcat(char dest, char src);
	char *ptr = *dest;
	_putchar(*dest);
	_putchar(*ptr);

	return (*dest);
>>>>>>> d455ec1dcb59e234ca8eab1035989260d151a802
}

