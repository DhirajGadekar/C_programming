// Calloc :

#include<stdio.h>
#include<stdlib.h>

void Mycalloc(int x){
	
	int *ptr = (int*)calloc(x,sizeof(int));
	printf("Enter the elements : \n");
	for(int i = 0;i < x;i++){
		//*(ptr + i) = x + i;
		int temp;
		scanf("%d",&temp);
		*(ptr + i)=temp;
	}
	printf("Element :\n");
	for(int i = 0;i < x;i++){
		printf("%d\n",*(ptr + i));
	}

}
void main(){
	int x;
	printf("Enter the no of element :");
	scanf("%d",&x);
	Mycalloc(x);
}
