#include <stdio.h>

int main(){

    int x = 10;
    int *y ;

    y = &x;


    printf("%d \n", *y);

    return 0;
}