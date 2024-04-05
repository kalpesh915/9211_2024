/**
    bitwise or operator

    10  =   1010
    12  =   1100
    |       ----
            1110
*/

#include<stdio.h>

void main(){
    int i, j, ans;

    i = 10;     /// 1010
    j = 12;     /// 1100

    ans = i | j;

    printf("\n Answer is %d",ans);
}
