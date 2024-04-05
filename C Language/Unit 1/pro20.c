/**
    swap two numbers without use of third variable
*/

#include<stdio.h>

void main(){
    int ip1, ip2;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);
    printf("\n Before swap ip1 is %d and ip2 is %d", ip1, ip2);

                        ///     ip1     ip2
                        ///     10      20
    ip1 = ip1 + ip2;    ///     30      20
    ip2 = ip1 - ip2;    ///     30      10
    ip1 = ip1 - ip2;    ///     20      10

    printf("\n After swap ip1 is %d and ip2 is %d", ip1, ip2);
}
