/**
    short unsigned integer data type

    bytes       2
    bit         16
    use bit     16
    sign bit    0
    range       2 ^ 16
    values      (0 to 65535)
    format      %u
*/

#include<stdio.h>

void main(){
    short unsigned int ip1;
    printf("\n Enter any value for ip1 \t");
    scanf("%u", &ip1);
    printf("\n Value of ip1 is %u", ip1);
}
