#include<stdio.h>

void main(){
	
	char ch;
	printf("Enter the Character :");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o'||ch == 'u'){
	
		printf("%c is a vowel\n",ch);
	}
	else{
		printf("%c is a consonant\n",ch);
	}

}
