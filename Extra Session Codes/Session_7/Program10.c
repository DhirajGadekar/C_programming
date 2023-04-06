/*
 10. Take no of rows from the user ROWS = 5
 		A
	      b a b
	    C E G E C
	  d c b a b c d
	E G I K M K I G E
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no rows :");
	scanf("%d",&row);
	char ch1;
	char ch2;
	for(int i = 1;i <= row;i++){
		ch1 = 64 + i;  
		ch2 = 96 + i;
		for(int sp = row;sp >= i;sp--){
			printf("\t");
		}
		for(int j = 1;j <= 2 * i -1;j++){
			if(i % 2 == 1){
				if(j < i){
					printf("%c\t",ch1);
					ch1+=2;
				}else{
					printf("%c\t",ch1);
					ch1-=2;
				}
				
			}else{
				if(j < i){

					printf("%c\t",ch2);
					ch2--;
				}else{
					printf("%c\t",ch2);
					ch2++;
				}
			
			}
			
		}

		printf("\n");
	}
}
