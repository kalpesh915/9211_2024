/**
    use sizeof operator to grab actual storage size of all
    integer data types
*/

#include<stdio.h>

void main(){
    printf("\n Size of short signed int is %d Bytes ",sizeof(short signed int));
    printf("\n Size of short unsigned int is %d Bytes ",sizeof(short unsigned int));
    printf("\n Size of long signed int is %d Bytes ",sizeof(long signed int));
    printf("\n Size of long unsigned int is %d Bytes ",sizeof(long unsigned int));
}
