#include<stdio.h>

void main() {
	
	FILE *fp = fopen("DEMO.txt","w");

	char comName[20]  = "G-DARK";

	fputs(comName,fp);
}
