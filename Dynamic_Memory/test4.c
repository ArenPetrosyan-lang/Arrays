#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *size;
	char *name;
}Person;

int main(){
	Person person;
	person.size = (int*)malloc(sizeof(int));
	person.name = (char*)malloc(sizeof(char) * 32);

	if(!person.name || !person.size){
		perror("Malloc error: ");
		exit(EXIT_FAILURE);
	}

	free(person.size);
	person.size = NULL;

	free(person.name);
	person.name = NULL;

	exit(EXIT_SUCCESS);
}
