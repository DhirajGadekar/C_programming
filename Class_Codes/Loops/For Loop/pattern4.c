#include<stdio.h>

void main(){
 	char ch = 'a';
	int x = 1;
	int y = 1;

	for(int i = 1; i <= 3;i++){
		for(int j = 1;j <= 3;j++){
			if(x %2 == 1){
				printf("%c ",ch);
				ch = ch + 2;
				x++;

			}else{
	      			
				printf("%d ",y);
				x++;
				y++;	
			}
		}
		printf("\n");
	}
}
