/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "myLibrary.h"

#define MAXLINES 5000 /* max #lines to be sorted */

int main(void)
{

	int aNumber;

	printf("Please enter a number: ");

	scanf("%d", &aNumber);

	printf("Yo entered %d", aNumber);

	getchar();

	return 0;
}
