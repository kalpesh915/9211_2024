/**
    long signed integer data type

    bytes       4
    bit         32
    use bit     31
    sign bit    1
    range       2 ^ 31
    values      (-2147483648 to 2147483647)
    format      %ld
*/

#include<stdio.h>

void main(){
    long signed int ip1;
    printf("\n Enter any value for ip1 \t");
    scanf("%ld", &ip1);
    printf("\n Value of ip1 is %ld", ip1);
}
