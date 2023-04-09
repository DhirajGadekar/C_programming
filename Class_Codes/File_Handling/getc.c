//fgetc

#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Success.txt","r");

	char ch;

	while((ch = fgetc(fp)) != EOF){
		
		printf("%c",ch);
	}
}
