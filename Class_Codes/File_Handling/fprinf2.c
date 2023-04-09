//fprinf()


#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Demo.txt","r+");

	fprintf(fp,"Exception Handling");
}
