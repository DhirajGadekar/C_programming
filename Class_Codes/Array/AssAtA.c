//Assigning Array to An Array


#include<stdio.h>

void main(){
	int arr1[3] = {10, 20 ,30};
	int arr2[3];

	for(int i = 0 ;i < 3;i++){
		arr2[i] = arr1[i];
	}

	// arr2 = arr1 Not assigning This type
	
	for(int i = 0;i < 3;i++){
		printf("%d\n",arr2[i]);
	}
}
