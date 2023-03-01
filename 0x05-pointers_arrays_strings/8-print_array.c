#include "main.h"
#include <stdio.h>

/**
* print_array - function prints n number of elements of
* an array.
* @a: pointer input
* @n: size
* Return: nothing;
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

	if (i < n - 1)	
		printf(", ");											
	}

	putchar('\n');
}
