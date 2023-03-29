#include<stdio.h>

void main(){

        int x = 5;
	int y = 6;
        int ans;

	ans = x && y;
        printf("%d\n",ans);      //1
        
	ans = x || y;
        printf("%d\n",ans);      //1

}

