#include<stdio.h>

void main(){

        int x = 5;
        int ans;

        ans = ++x + ++x + ++x;
        printf("%d\n",x);      //8
        printf("%d\n",ans);    //22

}

