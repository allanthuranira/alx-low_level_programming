#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* main - if statement to check if n is greater than 5*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * if staement goes here where it checks if n is greter
	 * than 5 or equal to 0 or less than 6 but not 0
	 */
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
