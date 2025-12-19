#include <stdio.h>

int main(){
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};
	int tmp = 1;
	for(int i = 0; i <= 4; ++i){
		if(arr1[i] != arr2[i]){
			tmp = 0;
			break;
		}
	}
	printf("%d\n", tmp);
}
