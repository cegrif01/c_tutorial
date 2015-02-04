
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constants


//Global definitions

typedef struct user {

		char name[50];
		int age;
		char email[50];
} User;

int main(void) {

	User user;

	user.age = 28;
	strcpy(user.name, "Charles");
	strcpy(user.email, "cegrif01@gmail.com");

	printf("name is %s\n", user.name);
	printf("age is %d\n", user.age);
	printf("email is %s\n", user.email);

	return EXIT_SUCCESS;
}

