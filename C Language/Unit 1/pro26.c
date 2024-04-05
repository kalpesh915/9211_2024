/**
    long unsigned integer data type

    bytes       4
    bit         32
    use bit     32
    sign bit    0
    range       2 ^ 32
    values      (0 to 4294967295)
    format      %lu
*/

#include<stdio.h>

void main(){
    long unsigned int ip1;
    printf("\n Enter any value for ip1 \t");
    scanf("%lu", &ip1);
    printf("\n Value of ip1 is %lu", ip1);
}
