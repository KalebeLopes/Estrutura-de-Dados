#include <stdio.h>

void troca(int *x, int *y){
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;

}

int main(){

    int a = 1, b = 2;

    printf("%d %d\n", a, b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    
return 0;
}