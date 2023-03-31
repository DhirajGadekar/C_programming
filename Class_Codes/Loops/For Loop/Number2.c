// 9 8 7 
// 6 5 4
// 3 2 1
 
#include<stdio.h>

void main(){
	
	int i,j;
	int k=9 ;
	
	for(i=1;i <= 3;i++){
		
		for(j = 1; j<= 3;j++){
			
			printf("%d ",k);
			k--;
		}
		printf("\n");
		
	}
}
