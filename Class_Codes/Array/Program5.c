/*
 5.WAP to take 1-D array from user and print the second largest
   element of the array.
 */


#include<stdio.h>

void main() {
	
	int size;
	printf("Enter the size of array ::");
	scanf("%d",&size);

	if(size > 0){
		int arr[size];
		printf("Enter the element of array ::\n");
		
		for(int i = 0;i < size;i++){
			scanf("%d",&arr[i]);
		}

		if(size > 2){
			int max1 = -1;
			int max2 = -1;
			int max3 = -1;
			for(int i = 0;i < size;i++){
				if(arr[i] > max1){
					max3 = max2;
					max2 = max1;
					max1 = arr[i];
				}else if(arr[i] > max2 && arr[i]<max1){
					max3 = max2;
					max2 = arr[i];
				}

			}
			printf("The Second largest number is %d\n",max2);
		}
		else{
			printf("-1\n");
		}
			
	}else{
		printf("Invalid Array\n");
	}
}
