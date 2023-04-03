/*
 5. take no of rows from the user
1   4   3
16  5   36
7   64  9

 */

#include<stdio.h>

void main(){
        
        int row ,x = 1,y;

        printf("Enter the row :");
        scanf("%d",&row);
	
	printf("Enter the Number :");
        scanf("%d",&y);

        for(int i = 1;i <= row ; i++){

                for(int j = 1; j <= row ; j++){
                	if(x % 2 == 0){
				printf("%d\t",y * y);
				y++;
				x++;
			}
			else{
				printf("%d\t",y);
				y++;
				x++;
			}
                }
                printf("\n");
        }
} 
