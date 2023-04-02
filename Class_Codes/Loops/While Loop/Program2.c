#include<stdio.h>

void main(){

	int i = 1;

	while(i <= 50){
		
		if(i % 4 == 0 && i % 7 ==0){

			if(i % 2 == 0){
				printf("%d ",i);
			}
		
		}
		
		i++;
		
	}
}	
