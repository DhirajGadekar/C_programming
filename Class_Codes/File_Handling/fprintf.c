//fprintf()

#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Demo.txt","w");
	fprintf(fp,"File Handling by Core2Web\n");

}
