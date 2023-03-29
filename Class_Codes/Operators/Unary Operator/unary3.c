#include<stdio.h>

int x = 10;

void fun(){
	
	int y = 20;
	int ans;
	
	ans = ++x + ++y;
	printf("%d\n",ans);   // 11+21=32
}

void main(){
	
	printf("In main\n");
	fun();
	printf("%d\n",x);         //11
	printf("end Main\n");
}	
