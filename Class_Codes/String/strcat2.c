//Without using library function cancate the string :


#include<stdio.h>

char* mystrcat(char *str1,char *str2){

	while(*str1 != '\0'){
		str1++;
	}

	while(*str2 != '\0'){
	
		*str1 = *str2;
		str1++;
		str2++;
	}	
	*str1 = '\0';
	return str1;
}
void main() {
	
	char str1[20] = "Dhiraj ";
	char *str2 = "Gadekar";

	mystrcat(str1,str2);

	puts(str1);
	puts(str2);
		
}
