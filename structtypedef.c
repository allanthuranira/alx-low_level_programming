#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[15];
	int age;
	char grade;
} user;

int main (){
	user user1 = {"bro", 23, 1};
	user user2 = {"Allan", 40, 2};

	printf("%s\n", user1.name);
	printf("%d", user1.grade);
	return 0;

}

