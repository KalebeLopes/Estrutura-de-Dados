#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    celula *p;
    for (p = le->prox;  p->dado != x && p->prox != NULL; p = p->prox);
    // if (p == NULL || p -> dado != x){
    //     printf("N ACHEI\n");
    //     return 0;
    // }
    
    if (p->dado == x){
        //printf("O elemento é: %d\n", p -> dado);
        return p;
    }

    //printf("N ACHEI\n");
    return NULL;
}

celula *busca_rec (celula *le, int x){
    celula *p = le->prox;   

    if (p ==  NULL){
        return NULL;
    }

    if (p->dado == x){
        return p;
    }
        
    return busca_rec(p, x);

}

// int main(){

//     celula *le, *n1, *n2, *n3, *aux;

//     le = malloc (sizeof(celula));
//     n1 = malloc (sizeof(celula));
//     n2 = malloc (sizeof(celula));
//     n3 = malloc (sizeof(celula));

//     le->prox = n1;
//     n1->dado = 1;
//     n1->prox = n2;
//     n2->dado = 2;
//     n2->prox = n3;
//     n3->dado = 3;
//     n3->prox = NULL;

//     aux = busca(le, 4); 

//     if (aux != NULL)
//         printf("O elemento é: %d\n", aux -> dado);
//     else 
//         printf("N ACHEI\n");

//     aux = busca_rec(le, 1); 

//     if (aux != NULL)
//         printf("O elemento é: %d\n", aux -> dado);
//     else 
//         printf("N ACHEI\n");


//     return 0;
// }