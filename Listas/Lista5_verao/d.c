#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int empilha (celula *p, int x){

    if (p == NULL)
        return 0;

    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

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

    celula *p, *a1, *a2, *a3;
    int *y, x = 10;

    y = &x;

    p = malloc(sizeof(celula));

    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 3);
    empilha(p, 4);

    if (desempilha(p, y)){
        for (p = p->prox; p != NULL; p = p->prox){
            printf("%d\n", p->dado);
        }
    }
    else 
        printf("ERRO\n");

    printf("valor y: %d\n", *y);

    return 0;
}