/*
 4.WAP to compare two arrays by with length and elements given by
   user if array are equal then print “Equal” otherwise print “Not
   Equal”.
 */

#include<stdio.h>

void main() {
	int size,flag;
	printf("Enter the size of element ::");
	scanf("%d",&size);
	
	int arr1[size];
	int arr2[size];

	printf("Enter the element of 1st array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the element of 2nd array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr2[i]);
	}
	
	for(int i = 0 ;i < size;i++){
		flag = 1;
		if(arr1[i]==arr2[i]){
			flag = 1;
		}
		else{
			flag = 0;
		}
	}
	if(flag == 1){
		printf("Equal.\n");
	}
	else{
		printf("Not Equal.\n");
	}
}

