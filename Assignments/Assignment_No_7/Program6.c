/*
 6. take no of rows from the user
	= = = = = =  
	$ $ $ $ $ $
	@ @ @ @ @ @
	= = = = = =
	$ $ $ $ $ $
	@ @ @ @ @ @
 */

#include<stdio.h>

void main(){
        
        int row;

        printf("Enter the row :");
        scanf("%d",&row);

        for(int i = 1;i <= row ; i++){

                for(int j = 1; j <= row ; j++){
               	 	if(i == 1 || i == 4){
				printf("=\t");
			}else if(i == 2 || i == 5 ){
				printf("$\t");
			}else{
				printf("@\t");
			}
                }
                printf("\n");
        }
} 
