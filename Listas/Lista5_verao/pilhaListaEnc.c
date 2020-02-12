#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int inicializa(celula *p){
    if (p == NULL)
        return 0;

    p->prox = NULL;

    return 1;
}

int empilha (celula *p, int x){

    if (p == NULL)
        return 0;

    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    // O NO CABEÇA SEMPRE APONTA PRO TOPO

    novo->prox = p->prox;
    p->prox = novo;
    novo->dado = x;

    return 1;
    
}

int desempilha (celula *p, int *y){
    if (p == NULL || p->prox == NULL)
        return 0;

    celula *lixo;

    lixo = p->prox;
    *y = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);

    return 1;

}

int main(){

    celula *p;
    int *y, x;

    y = &x;

    p = malloc(sizeof(celula));

    inicializa(p);
    empilha (p, 1);
    empilha (p, 2);
    empilha (p, 3);
    empilha (p, 4);
    desempilha (p, y);

    for (celula *i = p->prox; i != NULL; i = i->prox){
        printf("%d\n", i->dado);
    }
    

}