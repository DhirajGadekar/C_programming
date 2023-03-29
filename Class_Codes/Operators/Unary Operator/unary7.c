#include<stdio.h>

void main(){

        int x = 5;
        int ans;

        printf("%d\n",x);      //5
        ans = x++ + x++ + x++;
        printf("%d\n",x);      //8
        printf("%d\n",ans);    //18

}

