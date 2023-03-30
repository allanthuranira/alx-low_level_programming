#include <stdio.h>
#include <stdlib.h>

int main () {
	int x = 4;
	int *ptr;
	ptr = (int*) malloc (sizeof(int) * x);

	if (ptr == NULL)
	{
		printf("memory could not be allocated\n");
		return 0;
	}
	printf("enter values\n");
	int i;

	for  (i = 0; i < x; i++)
	{
		scanf("%d\n", ptr + 1);
	}

	printf("values you entered\n");

	for (i = 0; i < x; i++){
		printf("%d\n",*(ptr + i));
	}
	free (ptr);

	return 0;

}
