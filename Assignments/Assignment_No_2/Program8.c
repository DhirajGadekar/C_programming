/*
 Program 7:
WAP to check whether the given input is a Pythagorean triplet or not
 */

#include<stdio.h>

void main(){
	int a,b,c;

	printf("Enter the value of a :");
	scanf("%d",&a);

	printf("Enter the value of b :");
        scanf("%d",&b);

	printf("Enter the value of c :");
        scanf("%d",&c);


	if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf("Pythagorean is Triplet\n");

	}else{
		printf("Pythagorean is not Triplet\n");
	}

}
