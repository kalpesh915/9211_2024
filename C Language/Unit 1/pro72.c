/**
    Logical operator
    and (&&) both conditions must be true

    and operator truth table

    condition 1     condition 2     Result
    false           true            false
    true            false           false
    false           false           false
    true            true            true
*/

#include<stdio.h>

void main(){
    printf("\n Answer is %d", (10 > 50 && 10 > 5));
    printf("\n Answer is %d", (10 > 5 && 10 > 50));
    printf("\n Answer is %d", (10 > 50 && 10 > 50));
    printf("\n Answer is %d", (10 > 3 && 10 > 5));
}
