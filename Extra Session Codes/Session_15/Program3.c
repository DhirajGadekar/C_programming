/*
 3. WAP to your own string copy function and concat it , print the copied and concated
    string.
 */

#include<stdio.h>

char* strcopy(char* str2,char* str1){
	while(*str1 != '\0'){
		*str2 = *str1;
		str2++;
		str1++;
	}
	*str2 = '\0';
	
}
char* strconcat(char* str2 ,char* str3){
	
	while(*str2 != '\0'){
		str2++;
	}
	while(*str3 != '\0'){
		*str2 = *str3;
		str2++;
		str3++;
	}
	*str2 = '\0';
}
void main(){

	char str1[20];
	char str2[20];
	char str3[20];
	printf("Enter the String :");
	gets(str1);                        //warning: the `gets' function is dangerous and should not be used.  

	printf("Enter the String :");
	gets(str3);			   //warning: the `gets' function is dangerous and should not be used.
	
	printf("String Copy :\n");
	strcopy(str2,str1);
	puts(str2);
	printf("String Concat :\n");
	strconcat(str2 , str3);
	puts(str2);
}
