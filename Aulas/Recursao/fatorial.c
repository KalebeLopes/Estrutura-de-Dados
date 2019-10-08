
#include <stdio.h>

int fatorial(int n){

    if (n == 0)
        return 1;
    
    else
        return n * fatorial(n-1);

}

int main(){

   int x;

   x = fatorial(3);
    printf("Valor: %d\n", x);
return 0;
}