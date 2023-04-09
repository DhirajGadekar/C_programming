//ftell

#include<stdio.h>

void main() {

	FILE *fp = fopen("Demo1.txt","w");
	
	printf("%ld\n",ftell(fp));
	
	fprintf(fp,"Core2Web");

	printf("%ld\n",ftell(fp));

	printf("%ld\n",ftell(fp));

	fprintf(fp,"Bienceps");

	rewind(fp);

	printf("%ld\n",ftell(fp));
}
