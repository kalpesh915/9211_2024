#include<stdio.h>

void main(){
    /**
        print ASCII code of entered character
        ASCII : American Standard Code for Information Interchange
    */

    char ip1 = 'a';
    printf("\n Enter any character \t");
    ip1 = getche(); /// print character while typing
    printf("\n value of ip1 is %c and ASCII is %d", ip1, ip1);

}
