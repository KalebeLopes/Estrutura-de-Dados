#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *funcao(celula *le, int x){
    if (le == NULL) 
        return NULL;
    else if (le->dado == x)
        return le;
    else 
        return funcao(le->prox, x);
}

int main(){

    celula *p, *a1, *a2, *a3, *aux;

    p = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    a3 = malloc(sizeof(celula));
    
    p->prox = a1;

    a1->prox = a2;
    a1->dado = 1;

    a2->prox = a3;
    a2->dado = 2;

    a3->prox = NULL;
    a3->dado = 3;


    aux = funcao(p->prox, 3);


    printf("%d\n", p->prox->dado);
    printf("%d\n", aux->dado);
    
    return 0;
}