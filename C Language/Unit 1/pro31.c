#include<stdio.h>

void main(){
    /**
        double values : 1.2, 5.6, 78.96
        float   4 bytes
        double  8 bytes
    */

    double ip1;

    printf("\n Enter value for ip1 \t");
    scanf("%lf", &ip1);
    printf("\n value is %lf", ip1);
    printf("\n value is %.2lf", ip1);
}
