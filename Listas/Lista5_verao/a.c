#include <stdio.h>
#include <stdlib.h>

// #if TIPO == 0
// #define item char
// #elif TIPO == 1
// #define item int
// #elif TIPO == 2
// #define item double
// #endif

typedef struct pilha {
int *dados;
int N, topo;
} pilha;

// void inicializa (pilha *p){
//     p->N = 5;
//     p->dados = malloc(p->N * sizeof(int));
//     if(p->dados == NULL){
//         //printf("aqq");
//         return;
//     }
//     p->topo = 0;
// }

int empilha (pilha *p, int x){
    //p->dados = NULL;
    if (p->dados == NULL){
        //printf("aq0");
        return 0;
    }

    if (p->topo == p->N){
        //printf("\nRealoquei\n");
        p->dados = realloc(p->dados, 2 * p->N * sizeof(int));
    
        if (p->dados == NULL)
            return 0;
    
        p->N *= 2;
    }
    //printf("aq1");
    p->dados[p->topo] = x;
    p->topo++;

    return 1;
}

// int main(){

//     pilha *p;
//     int i;

//     p = malloc(sizeof(pilha));
//     inicializa(p);

//     if (empilha(p, i) == 0){
//         printf("Problema");
//     }
//     else
//         printf("Deu certo");

//     return 0;
// }