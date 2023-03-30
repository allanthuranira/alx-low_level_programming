#include <stdio.h>
#include <stdarg.h>

//function protytpe
int add(int args, ...);

//main functin 
int main(){

	printf("addition 1 = %d\n", add(7, 20, 30, 10, 20,30 ,40, 7));
	printf("addition 2 = %d\n", add(4, 20, 30, 10, 20));
	printf("addition 3 = %d\n", add(2, 20, 30));

	return 0;
}

//add function which is a varaidic function

 int add(int args, ...){

	 va_list list;

	 va_start(list, args);
	
	 //all actions will take palce here
	int i, sum = 0;

	for (i = 0; i< args; i++)
	{
		sum += va_arg(list,int);
	}
	

	 va_end(list);

	return sum;
 }
