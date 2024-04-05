#include<stdio.h>

/// define keyword

#define cube x*x*x
#define square x*x

void main(){
    int x;
    printf("\n Enter value of x \t");
    scanf("%d",&x);

    printf("\n cube of %d is %d", x, cube);
    printf("\n square of %d is %d", x, square);
}
