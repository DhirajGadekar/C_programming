//Library function 4 : String reverse


#include<stdio.h>

char* mystrrev(char *str){
	char x = 0;
	char *temp = str;

	while(*temp != '\0'){
		temp++;
	}
	temp--;

	while(str < temp){
		x = *str;
		*str = *temp;
		*temp = x;
		
		temp--;
		str++;	
	}
	return str;
}
void main() {
	
	char str[] = "Dhiraj";

	puts(str);

	mystrrev(str);

	puts(str);
}
