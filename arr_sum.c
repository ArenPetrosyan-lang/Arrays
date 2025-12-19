#include <stdio.h>

int main(){
	int n;
	printf("Enter arr size: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter arr elements:\n");
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	int sum = 0, tmp = 1;
	for(int i = 0; i < n; ++i){
		sum += arr[i];
		tmp *= arr[i];
	}
	printf("'+' = %d\n'*' = %d\n", sum, tmp);
}
