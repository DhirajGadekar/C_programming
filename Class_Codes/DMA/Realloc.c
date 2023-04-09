#include<stdio.h>
#include<stdlib.h>

void MyRealloc(int x){
	
	int *ptr1 = (int*)calloc(x,sizeof(int));
	
	printf("Enter the elements :");
	for(int i = 0;i < x;i++){
		int temp;
		scanf("%d",&temp);
		*(ptr1 + i) = temp;
	}
	int resize;
	printf("Enter Resize : ");
	scanf("%d",&resize);
	if(resize > 0){
		int *ptr2 = (int *)realloc(ptr1,resize);

		printf("Enter the elements again:\n");
		for(int i = 0;i < resize;i++){
			int temp;
			scanf("%d",&temp);
			*(ptr1 + i) = temp;
		}
	}else{
		printf("Please Enter Greater than 0 value.\n");
	}
}
void main(){
	int x;
	printf("Enter the no of element : ");
	scanf("%d",&x);
	
	MyRealloc(x);
}
