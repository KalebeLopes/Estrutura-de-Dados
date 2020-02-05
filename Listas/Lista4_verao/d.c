#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p){
    if (p->prox != NULL){
        celula *aux;
        aux = malloc(sizeof(celula));
        aux = p->prox; 
        p->prox = aux->prox;     
    }
    else if(p->prox == NULL){
        return 0;
    }
    return 1;
}

void remove_elemento (celula *le, int x){
    if (le == NULL)
        return;
    
    celula *p, *aux;
    for (p = le; p->prox->dado != x && p->prox != NULL; p = p->prox);

    //printf("aq0\n");
    if (p->prox == NULL){
        //printf("aq1\n");
        return;
    }

    else if (p->prox->dado == x){
        //printf("aq2\n");
        aux = malloc(sizeof(celula));
        aux = p->prox;
        p->prox = aux->prox;
        return;
    }
    else{
        //printf("aq3\n");
        return;
    }
}

void remove_todos_elementos (celula *le, int x){
    if (le == NULL)
        return;
    
    celula *p, *j, *aux;

    p = le;
    while (p->prox != NULL){
    //for (p = le; p->prox != NULL; p = p->prox){
        if (p->prox->dado == x){
            //aux = p;                      
            for (j = p->prox;j->prox != NULL && j->prox->dado == x; j = j->prox);
                if (j->prox == NULL){
                    p->prox = j->prox;
                    free(j);
                    return;
                }
                p->prox = j->prox;
                free(j);              
        }
        p = p->prox;
    }

}

// int main(){
//     celula *le, *a1, *a2, *a3, *a4, *aux;

//     le = malloc(sizeof(celula));
//     a1 = malloc(sizeof(celula));
//     a2 = malloc(sizeof(celula));
//     a3 = malloc(sizeof(celula));
//     a4 = malloc(sizeof(celula));
    
//     le->prox = a1;

//     a1->dado = 2;
//     a1->prox = a2;

//     a2->dado = 1;
//     a2->prox = a3;

//     a3->dado = 1;
//     a3->prox = a4;

//     a4->dado = 2;
//     a4->prox = NULL;

//     remove_todos_elementos(le, 2);
//     //printf("ZERADA\n");
//     if (le->prox != NULL){
//         for(aux = le->prox; aux != NULL; aux = aux->prox){ 
//             printf("%d\n", aux->dado);
//         }
//         //printf("ZERADA\n");
//     }

//     else{
//         printf("ZERADA\n");
//     }

//     return 0;
// }
