#include "main.h"
/** for concatenating two strings
 * string char
 * string dest
 */
int main (void)
{
	char src[7] = "Hello ";
	char dest[7] = "World!\n";
	char *ptr = src;
	_strcat(src,dest);
	_putchar (*ptr);
	_putchar ("%s\n", src);
	return 0;
