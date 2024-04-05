#include<stdio.h>

void main(){
    /**
        character data type used to store single character
        like a, b, c, d must use quotes around character
        'a', 'b', 'c', '1', ' ', '@'

        bytes   1
        bit     8
        sign    1
        value   2 ^ 7
        range   0 to 127 (128 to 255 non printable characters)

        ASCII : American Standard Code for Information Interchange
    */

    char ip1 = 'a';
    printf("\n Enter any character \t");
    ip1 = getche(); /// print character while typing
    printf("\n value of ip1 is %c", ip1);

}
