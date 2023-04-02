/*
 8. WAP take two characters if these characters are equal then print the same but if
    they are unequal then print their difference....
 */

#include<stdio.h>

void main(){
        char start ,end,flag = 0;

        printf("Enter the Start character :");
        scanf(" %c",&start);
        printf("Enter the End character :");
        scanf(" %c",&end);

        for(char i = start ;i <= end;i++){
                if(start == end){
                	printf("Characters are equal\n");
			flag = 1;
                }
        }
	if(flag == 0){
		printf("Difference = %d\n",end - start);
	}
	

} 
