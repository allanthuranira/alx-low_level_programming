#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0 ) {
		printf( "is positive%d\n",);
	} else if (n == 0){
	       printf( n, "is zero%d\n");
	} else { 
		printf( n, "is negative%d\n");
	}
	return (0);
}
