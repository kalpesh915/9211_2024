/**
    simple assignment operator
    compound assignment operator
*/

#include<stdio.h>

void main(){
    int ip1 = 10;
    printf("\n value of ip1 is %d", ip1);

    ip1 += 10; /// ip1 = ip1 + 10
    printf("\n value of ip1 is %d", ip1);

    ip1 -= 10;
    printf("\n value of ip1 is %d", ip1);

    ip1 *= 10;
    printf("\n value of ip1 is %d", ip1);

    ip1 /= 10;
    printf("\n value of ip1 is %d", ip1);

    ip1 %= 10;
    printf("\n value of ip1 is %d", ip1);
}
