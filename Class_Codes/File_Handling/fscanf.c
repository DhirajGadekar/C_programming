//fscanf

#include<stdio.h>

void main() {

	FILE *fp = fopen("Demo.txt","w");
	
	char ch;
	
	fscanf(fp,"%c",&ch);

	printf("%c\n",ch);
}
