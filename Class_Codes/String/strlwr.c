//Library function 7 : String Lowercase


#include<stdio.h>

char* mystrlwr(char *str){
	
	while(*str != '\0'){
		if(*str >= 'A' && *str <= 'Z'){
			*str = *str + 32;
		}
		str++;
	}
	return str;
}

void main() {
	char str[] = "Dhiraj";

	mystrlwr(str);

	puts(str);
}
