/**
    bitwise (not) ~ operator

    10  =   0000 0000 0000 1010
            1111 1111 1111 0101
*/

#include<stdio.h>

void main(){
    int i, ans;

    i = 10;     /// 1010

    ans = ~i; /// 0101

    printf("\n Answer is %d",ans);
}
