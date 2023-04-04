/*
 1. WAP to find the given element from the array
    Take array size and array elements from the user
 */

#include<stdio.h>

void main(){
	int size,search,flag = 0;

	printf("Enter the size of array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter element of array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the search element ::");
	scanf("%d",&search);

	for(int i = 0;i < size;i++){
		if(search == arr[i]){
			flag = 1;
		}
	}
	if(flag == 1){
		printf("%d is present\n",search);
	}else{
		printf("%d is not present\n",search);
	}
}
