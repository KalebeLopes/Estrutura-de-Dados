#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha (celula *p, int *y){
    if (p == NULL || p->prox == NULL)
        return 0;

    celula *lixo;

    lixo = p->prox;
    *y = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);

    return 1;

}

// int main(){

//     celula *p, *a1, *a2, *a3;
//     int *y, x = 10;

//     y = &x;

//     p = malloc(sizeof(celula));
//     a1 = malloc(sizeof(celula));
//     a2 = malloc(sizeof(celula));
//     a3 = malloc(sizeof(celula));


//     p->prox = a1;
//     a1->dado = 1;
//     a1->prox = a2;
//     a2->dado = 2;
//     a2->prox = a3;
//     a3->dado = 3;
//     a3->prox = NULL;

    
//     if (desempilha(p, y)){
//         for (p = p->prox; p != NULL; p = p->prox){
//             printf("%d\n", p->dado);
//         }
//     }
//     else 
//         printf("ERRO\n");

//     printf("valor y: %d\n", *y);

//     return 0;
// }