#include<stdio.h>

/**
    get values in kilometer and convert in meters
*/

void main(){
    float kms;
    int meters;

    printf("\n Enter Kilometers \t");
    scanf("%f", &kms);

    meters = kms * 1000;

    printf("\n Meters is %d", meters);
}
