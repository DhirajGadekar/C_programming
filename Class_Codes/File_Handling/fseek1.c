//fseek


#include<stdio.h>

void main() {
	
	FILE *fp = fopen("DEMO.txt","r");

	fseek(fp,3,0);

	char ch;

	while((ch = fgetc(fp)) != -1){
		
		printf("%c",ch);
	}
}
