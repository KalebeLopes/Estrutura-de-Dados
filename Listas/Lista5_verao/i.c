#include <stdio.h>
#include <stdlib.h>

// Fila com Lista Encadeada Circular

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *enfileira (celula *f, int x){
    // NAO POSSO VERIFICAR SE F == NULL P/ RETORNAR NULL
    celula *novo = malloc(sizeof(celula));

    if (novo == NULL)
        return 0;

    novo->prox = f->prox;
    f->prox = novo;
    f->dado = x;
    
    return f->prox;

}

// int main(){

//     celula *f, *aux;

//     f = malloc(sizeof(celula));

//     f->prox = f;

//     f = enfileira(f, 1);
//     f = enfileira(f, 2);
//     f = enfileira(f, 3);
//     f = enfileira(f, 3);
//      f = enfileira(f, 4);

//     for (celula *x = f->prox; x != f; x = x->prox){
//         printf("%d ", x->dado);
//     }
//     printf("\n");


//     return 0;
// }