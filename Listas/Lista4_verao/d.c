#include <stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p){
    p->prox = NULL;
    return 1;
}

void remove_elemento (celula *le, int x){
    
}

int main(){
    celula *le, *a1, *a2, *a3, *aux;

    le = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    a3 = malloc(sizeof(celula));
    
    le->prox = NULL;
    
    remove_depois(le, 10);

    for(aux = le->prox; aux != NULL; aux = aux->prox){ 
        printf("%d\n", aux->dado);
    }

    //printf("%d\n", le->prox->prox->dado);

    return 0;
}