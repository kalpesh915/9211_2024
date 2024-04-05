#include<stdio.h>

/**
    Write a program to convert from fahrenheit to celsius
*/

void main(){
    float cel, fah;

    printf("\n Enter Temprature in Fahreinheit \t");
    scanf("%f", &fah);

    cel = ((fah - 32) *5 ) / 9 ;

    printf("\n Temprature in ceilcus is %f",cel);
}
