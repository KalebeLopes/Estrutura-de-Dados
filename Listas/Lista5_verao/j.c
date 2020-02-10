#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desenfileira (celula *f, int *y){
    if (f->prox == f)
        return 0;

    celula *aux;

    aux = f->prox;
    *y = aux->dado;
    f->prox = aux->prox;

    return 1;

}
