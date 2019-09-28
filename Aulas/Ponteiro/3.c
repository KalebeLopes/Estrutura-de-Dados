#include <stdio.h>

int main(){

    int i, *p;

    i = 1234;
    p  = &i;

    printf("*p = %d\n", *p);                        // valor da variável apontada por p
    printf("p = %ld\n", (long int) p);           // endereco do apontado por p em deci
    printf("p = %p\n", (void *) p);              // endereco do apontado por p em hexa  
    printf("&p = %ld\n", (long int) &p);    // endereco *p deci

return 0;
    
}