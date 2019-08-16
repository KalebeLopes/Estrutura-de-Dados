#include <stdio.h>

int main(){

    int o, d = 2, h = 10;

    o = (d==2 || (d == 5 && h >= 14)) && h < 16;    

    if(1)
        printf("kalebe");

    printf("%d\n", o);
return 0;
}