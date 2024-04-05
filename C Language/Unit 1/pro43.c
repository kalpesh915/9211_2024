#include<stdio.h>

/**
    Write a program to calculate simple interest
*/

void main(){
    float principal, rateofint, numberofyears, simpleinteres;

    printf("\n Enter Principal Amount \t");
    scanf("%f", &principal);
    printf("\n Enter Rate of Interest \t");
    scanf("%f", &rateofint);
    printf("\n Enter Number of Years \t");
    scanf("%f", &numberofyears);

    simpleinteres = (principal * rateofint * numberofyears) / 100;

    printf("\n Simple Interest is %f", simpleinteres);
}
