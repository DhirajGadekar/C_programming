//fgets


#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Success.c","r");

	char compName[20];

	fgets(compName,6,fp);

	puts(compName);
}
