//Program 2: WAP print the value of the below expressions.


#include<stdio.h>

void main(){
	
	int x = 9;
	int ans;
	int ans1;
	int ans2;
	int ans3;

	ans = ++x + x++ + ++x;     //((++x + ++x)+ x++)
	printf("x = %d\n",x);      //12
	printf("Ans = %d\n",ans);  //((11+10)+12)

	ans1= ++x + ++x + ++x + ++x; //(((++x + ++x)+ ++x)+ ++x)
	printf("x = %d\n",x);        //16
        printf("Ans1 = %d\n",ans1);  //(((14 + 14)+ 15)+16)=59
	
	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("x = %d\n",x);        //21
        printf("Ans1 = %d\n",ans2);  //((16 + 17)+19 +19+21)=92
	
	ans3 = x++ + x++ + x++ + x++;
	printf("x = %d\n",x);        //25
        printf("Ans1 = %d\n",ans3);  //(21+22+23+24)=90
}
