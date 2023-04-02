/*
 9. WAP to calculate the square root of a number ranging from 100 to 300
 */
#include<stdio.h>

void main(){
        int start ,end;

        printf("Enter the Start Number :");
        scanf("%d",&start);
        printf("Enter the End Number :");
        scanf("%d",&end);
	
	printf("Square root is ");
        for(int i = start ;i <= end;i++){
                for(int j = 1;j <= i;j++){
			if(j * j == i){
				printf("%d \n",j);
			}
		}
        }

} 
