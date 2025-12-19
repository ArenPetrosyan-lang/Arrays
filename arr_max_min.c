#include <stdio.h>

int main(){
	int n;
	printf("Enter arr size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter arr elements:\n");
	for(int i = 0; i < n; ++i) 
		scanf("%d", &arr[i]);
	int max = arr[0], min = arr[0];
	for(int i = 1; i < n; ++i){
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}
	printf("arr max + min = %d\n", max + min);
}
