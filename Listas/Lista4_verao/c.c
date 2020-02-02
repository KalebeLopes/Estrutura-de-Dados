#include <stdlib.h>
#include <stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio (celula *le, int x){
    if (le == NULL){
        return;
    }
    
    celula *p = malloc(sizeof(celula));

    p->prox = le->prox;
    le->prox = p;
    p->dado = x;
}

void insere_antes (celula *le, int x, int y){
    if (le == NULL){
        //printf("n existe\n");// int main(){

//     celula *le, *a1, *a2, *a3, *aux;

//     le = malloc(sizeof(celula));
//     a1 = malloc(sizeof(celula));
//     a2 = malloc(sizeof(celula));
//     a3 = malloc(sizeof(celula));
    
//     le->prox = NULL;
    
//     insere_antes(le, 10, 4);

//     for(aux = le->prox; aux != NULL; aux = aux->prox){ 
//         printf("%d\n", aux->dado);
//     }

//     //printf("%d\n", le->prox->prox->dado);

//     return 0;
// }
        return;
    }

    celula *p, *aux;
    aux = malloc(sizeof(celula));
    // aux = malloc(sizeof(celula));
    p = le->prox;

    if (p == NULL){ // Inserir quando a lista ta vazia
        le->prox = aux;
        aux->dado = x;
        aux->prox = NULL;
        return;
    }

    if (p->dado == y){  // Inserir antes do primeiro elemento
        aux->prox = le->prox;
        le->prox = aux;
        aux->dado = x;
        return;
    }

    for (; p->prox != NULL && p->prox->dado != y && p->dado != y; p = p->prox);
    
    if(p->prox == NULL){    // Inserir quando n achei o y na lista
        //printf("aq1\n");
        aux->prox = NULL;
        p->prox = aux;
        aux->dado = x;
    }

    else{   // Inserir antes do elemento y da lista
        //printf("aq2\n");
        aux->prox = p->prox;
        p->prox = aux;
        aux->dado = x; 
    }

    return;

}

// int main(){

//     celula *le, *a1, *a2, *a3, *aux;

//     le = malloc(sizeof(celula));
//     a1 = malloc(sizeof(celula));
//     a2 = malloc(sizeof(celula));
//     a3 = malloc(sizeof(celula));
    
//     le->prox = NULL;
    
//     insere_antes(le, 10, 4);

//     for(aux = le->prox; aux != NULL; aux = aux->prox){ 
//         printf("%d\n", aux->dado);
//     }

//     //printf("%d\n", le->prox->prox->dado);

//     return 0;
// }