/*
2. take no of rows from the user
3 b 1 d
a 2 c 0
3 b 1 d
a 2 c 0 
 */

#include<stdio.h>

void main(){
	
	int row;
	char ch;
	printf("Enter the row :");
	scanf("%d",&row);

	for(int i = 1;i <= row ; i++){
		
		for(int j = 1; j <= row ; j++){
			if(i % 2 == 0){
				if(j % 2 == 1){
					printf("%c\t",96 + j);
	
				}else{
					printf("%d\t",row - j);
				}
			}else{
				if(j % 2 == 0){
					printf("%c\t",96 + j);
					
				}else{
					printf("%d\t",row - j);

				}
			}
		}
		
		printf("\n");
	}
}
