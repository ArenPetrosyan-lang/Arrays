#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;

	printf("Enter array size: ");
	scanf("%d", &size);
	
	int *ptr = (int*)calloc(size, sizeof(int));

	if(!ptr){
		perror("Malloc error: ");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < size; ++i){
		printf("Enter %d index elements: ", i);
		scanf("%d", ptr + i);
	}

	ptr = (int*)realloc(ptr, size * 2 * sizeof(int));

	if(!ptr){
		perror("Realloc error: ");
		exit(EXIT_FAILURE);
	}

	printf("After realloc:\n");

	for(int i = size; i < size * 2; ++i){
		printf("Enter %d index elements: ", i);
		scanf("%d", ptr + i);
	}
	
	int adder = 0;

	for(int i = 0; i < size * 2; ++i){
		adder += *(ptr + i); 
	}

	printf("Array elements sum - %d\n", adder);

	free(ptr);
	ptr = NULL;

	exit(EXIT_SUCCESS);
}
