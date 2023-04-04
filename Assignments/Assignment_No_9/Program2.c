/*
 2. WAP to calculate the count of even and odd elements
    Take array size and array elements from the user
 */


#include<stdio.h>

void main() {
	int size,count1 = 0,count2 = 0;

	printf("Enter the size of array ::");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the element of array ::\n");

	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i = 0;i < size;i++){
		if(i % 2 == 0){
			count1++;
		}
		else{
			count2++;
		}
	}
	printf("even element count is %d \n",count1);
	printf("Odd element count is %d \n",count2);
}
