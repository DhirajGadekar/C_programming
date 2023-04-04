/*
 6. take no of rows from the user
	D e F g
	e D c B
	F g H i
	g F e D
 */

#include<stdio.h>

void main(){
	int row;
	
	printf("Enter number of row ::");
	scanf("%d",&row);

	char ch1 = 64 + row;
	char ch2 = 96 + row;
	
	for(int i = 1;i <= row;i++){
		for(int j = 1;j <= row;j++){
			if(i % 2 ==1){
				if(j % 2 == 0){
					printf("%c ",ch2);
					ch2++;
					ch1++;
				}else{
					printf("%c ",ch1);
					ch2++;
					ch1++;
				}
			}else{
				if(j % 2 == 1){
					printf("%c ",ch2);
					ch2--;
					ch1--;;
				}else{
					printf("%c ",ch1);
					ch2--;
					ch1--;
				}
			}
		}
		ch1 = 64 + row + i;
		ch2 = 96 + row + i;
		printf("\n");
	}
	
}
