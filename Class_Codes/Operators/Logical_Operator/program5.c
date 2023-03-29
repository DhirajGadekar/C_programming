#include<stdio.h>

void main(){

        int x = 0;
        int y = 6;
        int ans;

        ans = x++ || --x;
        printf("%d\n",ans);      //0
        printf("%d\n",x);        //0  
        printf("%d\n",y);        //6

        ans = ++x && --y;
        printf("%d\n",ans);      //1
        printf("%d\n",x);        //1
        printf("%d\n",y);        //5

}

