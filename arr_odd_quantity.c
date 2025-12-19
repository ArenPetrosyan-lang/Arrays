#include <stdio.h>

int main(){
	int n; 
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	int tmp = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 != 0){
			++tmp;
		}
	}
	printf("Your array odd quantity is - %d\n", tmp);
}
