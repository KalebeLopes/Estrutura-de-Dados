#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){
    if (l1 == NULL && l2 == NULL)
        return;
    //printf("aq0");
    //celula *aux;
    
    while (l1->prox != NULL || l2->prox != NULL){
        // if (l1->prox == NULL && l2->prox == NULL){
        //     l3->prox == NULL;
        //     return;
        // }
        
        if (l1->prox == NULL){
            l3->prox = l2->prox;
            l2 = l2->prox;
            //printf("aq1");
            
        }

        else if (l2->prox == NULL){
            l3->prox = l1->prox;
            l1 = l1->prox;
            //printf("aq2");
            
        }
        //continue;
        else if (l1->prox->dado <= l2->prox->dado){
            l3->prox = l1->prox;
            l1 = l1->prox;
            printf("aq3");
            //continue;
        }

        else {//if (l1->prox->dado > l2->prox->dado){
            l3->prox = l2->prox;
            l2 = l2->prox;
            //printf("aq4");
        }
        l3 = l3->prox;
    }
    l3->prox == NULL;
}

int main(){
    celula *l3, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *aux, *l1, *l2;

    l3 = malloc(sizeof(celula));
    l1 = malloc(sizeof(celula));
    l2 = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    a3 = malloc(sizeof(celula));
    a4 = malloc(sizeof(celula));
    a5 = malloc(sizeof(celula));
    a6 = malloc(sizeof(celula));
    a7 = malloc(sizeof(celula));
    
    l3->prox = NULL;
    l1->prox = a1;
    l2->prox = a5;

    a1->dado = 1;
    a1->prox = a2;

    a2->dado = 7;
    a2->prox = a3;

    a3->dado = 9;
    a3->prox = a4;

    a4->dado = 10;
    a4->prox = NULL;

    a5->dado = 2;
    a5->prox = a6;

    a6->dado = 3;
    a6->prox = a7;

    a7->dado = 8;
    a7->prox = NULL;

    mescla_listas(l1, l2, l3);
    //printf("a1");
    if (l3->prox != NULL){
        for(aux = l3->prox; aux != NULL; aux = aux->prox){ 
            printf("%d", aux->dado);
        }
    }
    printf("\n");
    // if (l2->prox != NULL){
    //     for(aux = l2->prox; aux != NULL; aux = aux->prox){ 
    //         printf("%d", aux->dado);
    //     }
    // }
    // printf("\n");

    // printf("\n");
    // else{
    //     printf("ZERADA\n");
    // }

    return 0;
}