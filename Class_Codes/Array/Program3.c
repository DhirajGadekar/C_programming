/*
 3.WAP to create 3-D array of size given by user and print the sum of
   all left diagonal elements.
 */

#include<stdio.h>

void main() {
	int size,sum=0,num = 0;
       	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size][size][size];
	printf("Enter the element of array ::\n");
	for(int i = 0;i < size;i++){
		for(int j = 0;j < size;j++){
			for(int k = 0;k < size;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	printf("sum of all left diagonal ::\n");
	for(int i = 0;i < size;i++){
		
		for(int j = 0;j < size;j++){

			for(int k = 0;k < size;k++){

				if(i == num && j == k){
					sum = sum + arr[i][j][k];
				}else if(i == num && j == k){
					sum = sum + arr[i][j][k];
				}else if(i == num && j == k){
					sum = sum + arr[i][j][k];
				}
				
			}
		
		
		}
		num++;
		
	}
	printf("Sum of all left diagonal elements :: %d\n",sum);
}


