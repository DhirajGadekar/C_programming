#include<stdio.h>

void main() {

       int start,end;

       printf("Enter the Start Num :");
       scanf("%d",&start);

       printf("Enter the End Num :");
       scanf("%d",&end);
	
	printf("Even :");	       
       for(int i = end ; i >= start ;i--){
		if(i % 2 == 0){
			printf("%d\n",i);
			
		
		}
       }
       printf("Odd :"); 
	for(int i = start ;i <= end ; i++ ){
		if(i % 2 != 0){
			printf("%d\n",i);

		}
	}
}
       

