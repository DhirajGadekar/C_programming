// Putw and Getw

#include<stdio.h>

void main() {
	FILE *fp = fopen("Demo2.txt","w+");

	int num1 = 10,num2 = 20;

	printf("%ld\n",ftell(fp));
	putw(num1,fp);
	putw(num2,fp);
	printf("%ld\n",ftell(fp));

	rewind(fp);

	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));
}

