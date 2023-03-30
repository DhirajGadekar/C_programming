#include<stdio.h>

void main(){

	char ch;
	printf("Enter the Character : ");
	scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
		printf("%c is an alphabate\n",ch);
	}else{
		printf("%c is Not an Alpabate\n",ch);
	}
}	
