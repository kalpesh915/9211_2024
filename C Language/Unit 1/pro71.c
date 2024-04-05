/**
    ternary operator

    ans = (condition ? true part : false part)

    find maximum out of three numbers with ternary operator
*/

#include<stdio.h>

void main(){
    int ip1, ip2, ip3, ans;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);
    printf("\n Enter value for ip3 \t");
    scanf("%d", &ip3);

    /**
        ip1         ip2         ip3
        11          202          33
    */

    ans = (ip1>ip2 ? (ip1>ip3 ? ip1 : ip2) : (ip2>ip3 ? ip2 : ip3));

    printf("\n Maximum is %d", ans);
}
