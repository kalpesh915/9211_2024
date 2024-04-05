/**
    Logical operator
    not (!) inverse the result or operation
*/

#include<stdio.h>

void main(){
    printf("\n Answer is %d",(10 > 5));
    printf("\n Answer is %d",!(10 > 5));
    ///printf("\n Answer is %d",(!10 > 50 || 10 > 20));
    printf("\n Answer is %d",(!(10 > 50) || (10 > 20)));
    printf("\n Answer is %d",!((10 > 50) || (10 > 20)));
}
