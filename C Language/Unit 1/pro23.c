/**
    short sign integer data type

    bytes       2
    bit         16
    use bit     15
    sign bit    1
    range       2 ^ 15
    values      (-32768 to 32767)
    format      %d
*/

#include<stdio.h>

void main(){
    short signed int ip1;
    printf("\n Enter any value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Value of ip1 is %d", ip1);
}
