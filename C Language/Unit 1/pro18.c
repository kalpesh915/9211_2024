/**
    get values from keyboard
*/

#include<stdio.h>

void main(){
    int ip1, ip2, ans;

    printf("\n Enter value for ip1 and ip2 \t");
    scanf("%d%d", &ip1, &ip2);
    ans = ip1 + ip2;
    printf("\n Answer is %d", ans);
}
