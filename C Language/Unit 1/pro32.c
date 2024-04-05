#include<stdio.h>

void main(){
    /**
        long double values : 1.2, 5.6, 78.96
        float   4 bytes
        double  8 bytes
        long double 10 bytes
    */

    long double ip1;

    printf("\n Enter value for ip1 \t");
    scanf("%Lf", &ip1);
    printf("\n value is %Lf", ip1);
    printf("\n value is %.2Lf", ip1);
}
