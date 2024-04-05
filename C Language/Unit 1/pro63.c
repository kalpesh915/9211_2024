/**
    BODMAS
*/

#include<stdio.h>

void main(){
    int ip1 = (10 + 20) / 5 - 15 * 7;
    /**
        ip1 = (10 + 20) / 5 - 15 * 7;
        ip1 = 30 / 5 - 15 * 7;
        ip1 = 6 - 15 * 7;
        ip1 = 6 - 105;
        ip1 = -99;
    */
    printf("\n value of ip1 is %d ", ip1);
}
