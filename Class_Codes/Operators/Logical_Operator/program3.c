#include<stdio.h>

void main(){

        int x = 5;
        int y = 6;
        int ans;

        ans = ++x && ++y;
        printf("%d\n",ans);      //1
        printf("%d\n",x);        //6  
	printf("%d\n",y);        //7

        ans = ++x || ++y;
        printf("%d\n",ans);      //1
	printf("%d\n",x);        //7
        printf("%d\n",y);        //7

}


