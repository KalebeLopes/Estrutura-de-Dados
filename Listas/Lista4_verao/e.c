#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2){
    if (l == NULL)
        return;

    celula *p, *aux;

    for (p = l; p->prox != NULL;p=p->prox){
        if (p->prox->dado % 2 == 0){
            printf("aq\n");
            aux = p->prox;
            l2->prox = aux;
            l2->prox->prox = NULL;
            //p = l2->prox;
            
        }
        // else if (p->prox->dado % 2 !=  0){
        //     l1->prox = p->prox;
        //     p = l1->prox;
        //     //printf("l1");
        // }
    }
}

int main(){
    celula *l, *a1, *a2, *a3, *a4, *aux, *l1, *l2;

    l = malloc(sizeof(celula));
    l1 = malloc(sizeof(celula));
    l2 = malloc(sizeof(celula));
    a1 = malloc(sizeof(celula));
    a2 = malloc(sizeof(celula));
    a3 = malloc(sizeof(celula));
    a4 = malloc(sizeof(celula));
    
    l->prox = a1;
    l1->prox = NULL;
    l2->prox = NULL;

    a1->dado = 2;
    a1->prox = a2;

    a2->dado = 2;
    a2->prox = a3;

    a3->dado = 7;
    a3->prox = a4;

    a4->dado =3;
    a4->prox = NULL;

    divide_lista(l, l1, l2);

    // if (l1->prox != NULL){
    //     for(aux = l1->prox; aux != NULL; aux = aux->prox){ 
    //         printf("%d", aux->dado);
    //     }
    // }
    printf("\n");
    if (l2->prox != NULL){
        for(aux = l2->prox; aux != NULL; aux = aux->prox){ 
            printf("%d", aux->dado);
        }
    }
    
    // printf("\n");
    // else{
    //     printf("ZERADA\n");
    // }

//     return 0;
// }