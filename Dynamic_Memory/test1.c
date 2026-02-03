#include <stdio.h>
#include <stdlib.h>

int main(){
	int size; 
	printf("Enter arrat size: "); 
	scanf("%d", &size);

	int *ptr = malloc(size * sizeof(int));
		
	if(ptr == NULL){
		printf("Invalid code!\n");
		exit(EXIT_FAILURE);; 
	}
		
	int sum = 0;

	for(int i = 0; i < size; ++i){
		printf("Enter %d index element: ", i + 1);
		scanf("%d", &ptr[i]);
		sum += ptr[i];
	}
	printf("Array element sum = %d\n", sum);

	free(ptr);
	exit(EXIT_SUCCESS);
}
