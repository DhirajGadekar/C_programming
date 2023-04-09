//Fopen

#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Demo.txt","w");
	printf("%p\n",fp);
}
