
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int *list, int size_of_list)
{
	int i, j, temp;
	for(i=0; i<size_of_list; i++) {
		for(j=0;  j<size_of_list-1;  j++) {

			int current = j;
			int next = j+1;

			if(list[current] < list[next]) {
				temp = list[current];
				list[current] = list[next];
				list[next] = temp;
			}
		}
	}
}

int main(void) {

	int A[] = {3,2,1,5,6,4};
	bubble_sort(A, 6);

	int i;
	for(i=0;i<6;i++) { printf("%d", A[i]); }

	return EXIT_SUCCESS;
}

