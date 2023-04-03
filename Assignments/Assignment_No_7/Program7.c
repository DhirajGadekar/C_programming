/*
 7. take no of rows from the user
	1  4  27
	4  27 16
	27 16 125

 */

#include<stdio.h>

void main(){
        
        int row ,x = 1,y = 1;

        printf("Enter the row :");
        scanf("%d",&row);

        for(int i = 1;i <= row ; i++){

                for(int j = 1; j <= row ; j++){
              		if(x % 2 == 0){
				printf("%d\t",y * y);
				y++;
				x++;
			}else{
				printf("%d\t",y * y * y);
				x++;
				y++;
			}	
                }
		y -= 2;
                printf("\n");
        }
} 
