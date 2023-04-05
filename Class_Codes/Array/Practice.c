#include<stdio.h>

void main() {
	int size,num=0;

	printf("Enter the size of array ::");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0;i <= size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i = 0;i <= size;i++){
		if(num < arr[i]){
			num = arr[i];
		}

	}
	printf("%d\n",num);
}
