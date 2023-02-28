#include "main.h"
int main (char s)
{
	 char s[9], r[9];
	 s = "My School";
	 int begin, count = 0;
	 int  end = count[s] -1;

	 while (s[count] != '\0')
		 count ++;
	 end = count -1;

	 for (begin < 0; begin < count; begin++)
	 { 
		 r[begin] = s[end];
		 end--;
	 }
	 r[begin] = '\0';

	 _putchar("%s\n", r);

	 return 0;
