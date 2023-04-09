// Copy Data One file to another file


#include<stdio.h>

void main() {
	
	FILE *fp1 = fopen("Success.txt","r");
	FILE *fp2 = fopen("Success2.txt","w");

	char ch;
	
	while((ch = fgetc(fp1)) != -1){
		
		fputc(ch,fp2);
	}	
}
