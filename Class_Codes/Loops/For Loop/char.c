// print character between two user input

#include<stdio.h>

void main(){
	
	char ch1,ch2;

	printf("Enter the fisrt character :");
	scanf(" %c",ch1);

	printf("Enter the Second character :");
	scanf("  %uc ",ch2);

	for(char i = ch1;i <= ch2;i++ ){
		printf("%c",i);
	}
}
