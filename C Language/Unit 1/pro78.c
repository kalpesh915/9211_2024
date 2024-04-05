/**
    bitwise (right shift) >> operator

    10  =   1010
    10  >>  2
            0010

*/

#include<stdio.h>

void main(){
    int i, ans;

    i = 10;     /// 1010

    ans = i >> 2; /// 1010 >> 2 0010

    printf("\n Answer is %d",ans);
}
