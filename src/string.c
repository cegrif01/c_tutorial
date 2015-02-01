/*
 * string.c
 *
 *  Created on: Oct 21, 2014
 *      Author: charles
 */


void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y=temp;
}

void strcat(char *s, char *t)
{

	while(*s)
		s++;

	while(*s++ = *t++);

}
