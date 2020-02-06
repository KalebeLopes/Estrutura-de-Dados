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
            //printf("aq1\n");
            l2->prox = p->prox;
            p = l2;
            l2 = l2->prox;           
        }
        else if (p->prox->dado % 2 != 0){
            //printf("aq2\n");
            l1->prox = p->prox;
            p = l1;
            l1 = l1->prox;
            //printf("l1");
        }
    }
    l1->prox = NULL;
    l2->prox = NULL;
}

// int main(){
//     celula *l, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *aux, *l1, *l2;

//     l = malloc(sizeof(celula));
//     l1 = malloc(sizeof(celula));
//     l2 = malloc(sizeof(celula));
//     a1 = malloc(sizeof(celula));
//     a2 = malloc(sizeof(celula));
//     a3 = malloc(sizeof(celula));
//     a4 = malloc(sizeof(celula));
//     a5 = malloc(sizeof(celula));
//     a6 = malloc(sizeof(celula));
//     a7 = malloc(sizeof(celula));
    
//     l->prox = a1;
//     l1->prox = NULL;
//     l2->prox = NULL;

//     a1->dado = 10;
//     a1->prox = a2;

//     a2->dado = 4;
//     a2->prox = a3;

//     a3->dado = 9;
//     a3->prox = a4;

//     a4->dado =2;
//     a4->prox = a5;

//     a5->dado =7;
//     a5->prox = a6;

//     a6->dado =10;
//     a6->prox = NULL;

//     divide_lista(l, l1, l2);

//     if (l1->prox != NULL){
//         for(aux = l1->prox; aux != NULL; aux = aux->prox){ 
//             printf("%d", aux->dado);
//         }
//     }
//     printf("\n");
//     if (l2->prox != NULL){
//         for(aux = l2->prox; aux != NULL; aux = aux->prox){ 
//             printf("%d", aux->dado);
//         }
//     }
//     printf("\n");

//     // printf("\n");
//     // else{
//     //     printf("ZERADA\n");
//     // }

//     return 0;
// }