#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (s = 0; s <= 9; s++)
		printf("%d", s);

	putchar('\n');

	return (0);
}
