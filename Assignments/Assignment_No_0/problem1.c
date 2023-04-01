//write a program to print the value and size of the variables.Take all value from the user.

#include<stdio.h>

void main(){
	
	int num;
	char chr;
	float rs;
	double crMoney;

	printf("Enter the Number :");
	scanf("%d",&num);
	
	printf("Enter the Character :");
        scanf("	%c",&chr);

	printf("Enter the Amount :");
        scanf("%f",&rs);

	printf("Enter the Money in Cr :");
        scanf("%lf",&crMoney);


	printf("Number = %d\n",num);
	printf("Character = %c\n",chr);
	printf("rs = %f\n",rs);
	printf("crMoney = %lf\n",crMoney);

	printf("Size of Integer = %ld byte\n",sizeof(int));
	printf("Size of Char = %ld byte\n",sizeof(char));
	printf("Size of Float = %ld byte\n",sizeof(float));
	printf("Size of Double = %ld byte\n",sizeof(double));
}

