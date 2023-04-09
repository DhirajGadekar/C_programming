// Library Function 6 : String Compair


#include<stdio.h>
#include<string.h>

int mystrcmp(char *str1,char *str2){
	
	while(*str1 != '\0'){
		
		if(*str1 == *str2){
			str1++;
			str2++;

		}else{
			
			return (*str1 - *str2);
		}
	}
	return 0;
}

void main () {
	
	char *str1 = "Dhiraj";
	char *str2 = "dhiraj";
	
	int diff = 1,count1 = 0,count2 = 0;
/*	
	while(*str1 != '\0'){
		str1++;
		count1++;
	}

	while(*str2 != '\0'){
		str2++;
		count2++;
	}
*/
	if(strlen(str1) == strlen(str2)){

		diff = mystrcmp(str1,str2);
	}
	
	if(diff == 0){
		printf("Strings are equal.\n");

	}else{
		printf("Strings are not equal.\n");

	}
}

