/**
    BODMAS
*/

#include<stdio.h>

void main(){
    int ip1 = 10 + 20 / 5 - 15 * 7;
    /**
        ip1 = 10 + 20 / 5 - 15 * 7;
        ip1 = 10 + 4 - 15 * 7;
        ip1 = 10 + 4 - 105;
        ip1 = 14 - 105;
        ip1 = -91;
    */
    printf("\n value of ip1 is %d ", ip1);
}
