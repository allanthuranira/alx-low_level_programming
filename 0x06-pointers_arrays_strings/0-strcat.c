#include "main.h"
/** for concatenating two strings
 * string char
 * string dest
 */
int main (char *src, char dest)
{
	char src[7] = "Hello ";
	char dest[7] = "World!\n";
	char *ptr = src;
	*_strcat(*src,dest);
	*_putchar (*ptr);
	*_putchar ("%s", *src);
	_putchar ("\n");
	return (0);
