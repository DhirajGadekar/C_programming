/*
 Library Function : 1.strlen
 */

#include<stdio.h>

int mystrlen(char *str){
	
	int count = 0;

	while(*str != '\0') {
		count++;
		str++;
	}
	return count;
}
void main() {
	char *str = "Dhiraj";

	puts(str);

	int len = mystrlen(str);

	printf("Lenth of the string is %d\n",len);	

}
