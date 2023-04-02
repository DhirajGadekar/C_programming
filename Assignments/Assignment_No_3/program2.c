/*
 2. WAP to print the character whose ASCII is even.
 */
#include<stdio.h>

void main(){
	
	int start,end;

	printf("Enter the start number :");
	scanf("%d",&start);
	printf("Enter the end  number :");
        scanf("%d",&end);
	
	printf("Print those character have even  ASCII Value :\n");
	for(int i = start ;i <= end;i++){
		if(i % 2 == 0){
			printf("%d = %c\n",i,i);
		}

	}

}
