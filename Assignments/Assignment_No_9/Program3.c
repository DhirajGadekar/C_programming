/*
 3. WAP to add two different arrays of the same size
    Take array size and array elements from the user
 */

#include<stdio.h>

void main() {
        int size;

        printf("Enter the size of array ::");
        scanf("%d",&size);

        int arr1[size];
	int arr2[size];
        printf("Enter the element of 1st array ::\n");

        for(int i = 0;i < size;i++){
                scanf("%d",&arr1[i]);
        }
	
	printf("Enter the element of 2nd array ::\n");

	for(int i = 0;i < size;i++){
		scanf("%d",&arr2[i]);
	}
	
	printf("Addition of two array ::\n");
        for(int i = 0;i < size;i++){
                printf("%d \n",arr1[i] + arr2[i]);
        }
        
}

