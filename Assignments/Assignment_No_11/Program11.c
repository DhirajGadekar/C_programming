/*
 11. WAP to print 2nd largest element in the array. Print using Pointer
*/

#include<stdio.h>

void main() {
	int max1,max2;
	int arr[6] = {10,11,12,13,14,15};

	max1 = arr[0];
	max2 = arr[0];

	for(int i = 0;i < 6;i++){
		if(arr[i] > max1){
			max2 = max1;
			max1 = arr[i];
			printf("%d\n",arr[i]);
		}else if(arr[i] > max2){
			max2 = arr[i];
			printf("%d\n",arr[i]);
		}
		
	}



}
