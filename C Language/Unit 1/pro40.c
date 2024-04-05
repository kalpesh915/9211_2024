#include<stdio.h>

int ip1 = 100;

void main(){
    /**
        every variable have own life scope
        global variable can access from anywhere in program
    */

    int ip1 = 10;
    printf("\n value of ip1 is %d", ip1); /// 10

    {
        int ip1 = 20;
        printf("\n value of ip1 is %d", ip1); /// 20

        {
            int ip1 = 30;
            printf("\n value of ip1 is %d", ip1);
        }
    }

    printf("\n value of ip1 is %d", ip1);  /// 10
}
