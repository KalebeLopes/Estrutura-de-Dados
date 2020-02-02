#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    celula *aux;

    for (aux = le->prox ; aux->dado != x && aux != NULL; aux = aux->prox);
    
    if (aux == NULL)
        return 0;
    
    // if (aux->dado != x)
    //      return 0;

    return aux;

}

celula *busca_rec (celula *le, int x){
    
}


int main(){

    celula *p, *a1, *a2, *aux;

    p = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    
    p->prox = a1;

    a1->prox = a2;
    a1->dado = 1;

    a2->prox = NULL;
    a2->dado = 2;

    aux = busca(p, 3);

    if (aux == NULL){
        printf("Elemento n ta na lista\n");
    }
    else{
        printf("%d\n", aux->dado);
    }
    


    return 0;
}