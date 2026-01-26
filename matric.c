#include <stdio.h>
#define ROW 4
#define COLUMN 4

void main_diagonal(int arr[ROW][COLUMN]);
void main_diagonal_top(int arr[ROW][COLUMN]);
void main_diagonal_down(int arr[ROW][COLUMN]);
void secondary_diaganal(int arr[ROW][COLUMN]);
void secondary_diaganal_top(int arr[ROW][COLUMN]);
void secondary_diaganal_down(int arr[ROW][COLUMN]);


int main(){
	int arr[ROW][COLUMN] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}};
}

void main_diagonal(int arr[ROW][COLUMN]){
	printf("Main diaganal - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i == j) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}


void main_diagonal_top(int arr[ROW][COLUMN]){
	printf("Main diaganal top - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i < j) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

void main_diagonal_down(int arr[ROW][COLUMN]){
	printf("Main diaganal down - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i > j) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

void secondary_diaganal(int arr[ROW][COLUMN]){
	printf("Secondary diaganal - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i + j == COLUMN - 1) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

void secondary_diaganal_top(int arr[ROW][COLUMN]){
	printf("Secondary diaganal - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i + j < COLUMN - 1) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");	
}

void secondary_diaganal_down(int arr[ROW][COLUMN]){
	printf("Secondary diaganal - ");
	for(int i = 0; i < COLUMN; ++i){
		for(int j = 0; j < ROW; ++j){
			if(i + j > COLUMN - 1) printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}
