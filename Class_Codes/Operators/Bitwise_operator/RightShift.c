#include<stdio.h>

void main(){

        int x = 5;
        int y = 4;
        int ans;

        ans = x >> 3;
        printf("%d\n",ans);

        ans = --y >> 5;
        printf("%d\n",ans);
        printf("%d\n",y);
}

