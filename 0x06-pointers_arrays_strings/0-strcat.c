#include "main.h"
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
}
