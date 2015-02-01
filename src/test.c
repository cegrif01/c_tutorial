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

	int *dynamicArray = malloc( 20 * sizeof(int) );

	*dynamicArray = 20;

	printf("Address is %x and value is %d\n", dynamicArray, *dynamicArray);

	dynamicArray[1] = 30;
	printf("dynamicArray[1] is %d\n", dynamicArray[0]);
	printf("Size of dynamicArray is %d\n", sizeof(dynamicArray));

	printf("ads %d", dynamicArray[0]);
	free(dynamicArray);
	printf("adsf %s", dynamicArray[0]);

	return 0;

}
