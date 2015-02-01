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

int main(void)
{

	int sizes[] = {15, 20, 30};

	int *ptr = sizes;

	ptr++;


	printf("%d", *ptr);

}
