//fclose


#include<stdio.h>

void main() {

	FILE *fp = fopen("DEMO.txt","r");

	printf("%c\n",fgetc(fp));

	fclose(fp);

	printf("%c\n",fgetc(fp));
}
