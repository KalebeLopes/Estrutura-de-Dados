#include <stdio.h>

void troca(int *a, int *b){         // FUCNAO Q TROCA VALORES 
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

}

int calcula(int n, int *m, int *s){         // FUNCAO Q RETORNA VARIOS VALORES

    *m = n * n;
    *s = n + n;

    return 1;
}

int main(){

    // 1-
    int a = 2, b = 5;

    printf("%d %d\n", a, b);
    troca(&a,&b);
    printf("%d %d\n", a, b);

    // ----------------------------

    // 2-
    int n = 10, mult, soma;

    calcula(n, &mult, &soma);
    printf("%d %d\n", mult, soma);


    return 0;
}