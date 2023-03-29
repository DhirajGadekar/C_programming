#include<stdio.h>

void main(){
	
	int x = 15;
	int y = 8;
	int ans;

	ans = x << 3;
	printf("%d\n",ans);

	ans = y++ << 5;
	printf("%d\n",ans);
	printf("%d\n",y);
}	
