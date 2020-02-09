#include <stdlib.h>
#include <stdio.h>

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


// int main(){

//     celula *p;
//     p = malloc(sizeof(celula));

//     if (empilha(p, 2) == 0){
//         printf("Erro\n");
//     }

//     else 
//         printf("Deu certo\n");

//     return 0;
// }