#include <stdio.h>

int main(){
	int n = 10, tar;
	int arr[n];
	printf("Enter number: ");
	scanf("%d", &tar);
	printf("Enter arr elements: ");
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	int tmp = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] == tar){
			tmp = i;
			break;
		}else
			tmp = -1;
	}
	printf("arr index or (-1) %d\n", tmp);
}
