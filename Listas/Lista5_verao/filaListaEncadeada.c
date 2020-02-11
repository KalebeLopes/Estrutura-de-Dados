#include <stdio.h>
#include <stdlib.h>

// Fila com Lista Encadeada Circular

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula * inicializa(){
    celula *f = malloc(sizeof(celula));
    if (f == NULL)
        return 0;
    
    f->prox = f;

    return f;
}

celula *enfileira (celula *f, int x){
    // NAO POSSO VERIFICAR SE F == NULL P/ RETORNAR NULL
    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    novo->prox = f->prox;
    f->prox = novo;
    f->dado = x;
    
    return f->prox;

}

int desenfileira (celula *f, int *y){
    if (f->prox == f)
        return 0;

    celula *aux;

    aux = f->prox;
    *y = aux->dado;
    f->prox = aux->prox;

    return 1;

}

int main(){

    celula *f, *aux;
    int *y, x;

    y = &x;

    f = inicializa();
    f = enfileira(f, 1);
    f = enfileira(f, 2);
    f = enfileira(f, 3);
    f = enfileira(f, 3);
    f = enfileira(f, 4);
     desenfileira(f, y);

    for (celula *x = f->prox; x != f; x = x->prox){
        printf("%d ", x->dado);
    }
    printf("\n");


    return 0;
}