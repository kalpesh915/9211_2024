#include<stdio.h>

int ip1 = 100;

void main(){
    /**
        every variable have own life scope
        global variable can access from anywhere in program
    */

    printf("\n value of ip1 is %d", ip1);
    {
        printf("\n value of ip1 is %d", ip1);

        {
            printf("\n value of ip1 is %d", ip1);
        }
    }

    printf("\n value of ip1 is %d", ip1);
}
