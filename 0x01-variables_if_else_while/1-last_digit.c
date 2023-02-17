#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* main - if statement to check if n is greater than 5 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * if staement goes here where it checks if n is greter
	 * than 5 or equal to 0 or less than 6 but not 01-last_digit.c
	 */
	if (n > 5)
	{
		printf("%d Last digit of", n, "is", n, "and is greater than 5\n");
	} else if (n == 0)
	{
		printf("%d last digit of ", n, "is", n, "and is equal to 0\n");
	} else if (n < 6 && n != 0)
	{
		printf("%d last digit of ", n, "is", n, "and is less than 6 and not 0\n");
	}
	return (0);
}
