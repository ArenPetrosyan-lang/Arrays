#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 0;
	
	printf("Enter array size: "); 
	scanf("%d", &size);

	int *ptr = (int*)malloc(size * sizeof(int));
	
	if(!ptr){
		perror("Malloc error: ");
		exit(EXIT_FAILURE);
	}
		
	for(int i = 0; i < size; ++i){
		printf("Enter %d index element: ", i);
		scanf("%d", ptr + i);
	}

	int adder = 0;

	for(int i = 0; i < size; ++i){
		adder += *(ptr + i);
	}

	printf("Array elements sum = %d\n", adder);

	free(ptr);
	ptr = NULL;
	exit(EXIT_SUCCESS);
}
