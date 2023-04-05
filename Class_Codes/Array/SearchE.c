// Searching Element in array


#include<stdio.h>

void main() {
	
	int size,search,flag = 0;

	printf("Enter the Size of array ::");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the element in array ::\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the search Element ::");
	scanf("%d",&search);

	for(int i = 0;i < size;i++){
		if(search == arr[i]){
			flag = 1;
		}
	}
	if(flag == 1){
		printf("Element Found In Array\n");
	}else{
		printf("Element is Not Found In Array\n");
	}
}
