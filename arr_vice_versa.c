#include <stdio.h>

int main(){
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements:\n");
	for(int i = 0; i < n; ++i){
	       	scanf("%d", &arr[i]);
	}
	printf("Array vice versa:\n");
	for(int i = n - 1; i >= 0; --i){
		printf("%d ", arr[i]);
	}printf("\n");
}
