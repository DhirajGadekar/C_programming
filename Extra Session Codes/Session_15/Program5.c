/*
 5. WAP to get 2 strings from user and compare that with case ignore(write your on string
    compare function with ignore case)
 */

#include<stdio.h>
#include<string.h>

int mystrcomp(char *str1,char *str2){
	int flag = 1;
	if(strlen(str1) == strlen(str2)){
		while(*str1 != '\0'){
			if(*str1 == *str2 || *str1 == (*str2) - 32 || *str1 == (*str2) + 32){
				str1++;
				str2++;
				flag = 1;
			}else{
				flag = 0;
				break;
			}
		}
	}else{
		flag = 0;
	}
	return flag;
}
void main(){

	char str1[20],str2[20];
	printf("Enter the two Strings : \n");
	gets(str1);
	gets(str2);
	
	int flag = mystrcomp(str1,str2);
	if(flag == 1){
		printf("String is equal.\n");
	}
	else{
		printf("Strings is Not equal.\n");
	}
}
