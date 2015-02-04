
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constants
//union within a struct example: http://www.wellho.net/resources/ex.php4?item=c209/tud.c

//Global definitions

typedef union age_union {
	int i;
	char y[50];
} UserAge;

typedef struct user {

		char name[50];
		UserAge age;
		char email[50];
} User;


int main(void) {

	User user;

	//user.age.i = 28;
	strcpy(user.age.y, "twenty-eight");
	strcpy(user.name, "Charles");
	strcpy(user.email, "cegrif01@gmail.com");

	printf("name is %s\n", user.name);
	//printf("age is %d\n", user.age.i);
	printf("age is %s\n", user.age.y);
	printf("email is %s\n", user.email);

	return EXIT_SUCCESS;
}

