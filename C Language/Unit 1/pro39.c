#include<stdio.h>

void main(){
    /**
        every variable have own life scope
        local variable accessible only from their own scope
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
