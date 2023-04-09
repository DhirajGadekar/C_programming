//Library Function 8 : String Upper


#include<stdio.h>

char* mystrupr(char *str){
	
	while(*str != '\0'){
		
		if(*str >= 'a' && *str <= 'z'){
			
			*str = *str - 32;
		}
		str++;
	}
	return str;
}
void main() {
	char str[] = "Dhiraj";

	mystrupr(str);

	puts(str);
}
