// Assigning array element


#include<stdio.h>

void main(){
	int arr[5];

	printf("Enter the array Element\n");

	for(int i = 0;i < 5 ;i++){
		scanf("%d \n",&arr[i]);
	}

	printf("Element of Array :: \n");

	for(int i = 0;i < 5;i++){
		printf("%d \n",arr[i]);
	}
	
}
