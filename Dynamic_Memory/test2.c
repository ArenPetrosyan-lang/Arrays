#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 5; 
	
	int *ptr1 = calloc(size, sizeof(int));
	
	if(ptr1 == NULL){
		printf("Invalid code!\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < size; ++i){
		printf("Enter array %d index elements: ", i + 1);
		scanf("%d", &ptr1[i]);
	}
	
	size = 10;

	ptr1 = realloc(ptr1, size * sizeof(int));

	for(int i = 0; i < size; ++i){
		printf("Enter new array %d index elements: ", i + 1);
		scanf("%d", &ptr1[i]);
	}
	
	for(int i = 0; i < size; ++i)
		printf("%d index = %d\n", i + 1, ptr1[i]);
	
	free(ptr1);
	exit(EXIT_SUCCESS);
}
