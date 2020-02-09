#include <stdlib.h>
#include <stdio.h>

typedef struct pilha {
    int *dados;
    int N, topo;
} pilha;

// void inicializa(pilha *p){
//     p->N = 5;
//     p->dados = malloc(p->N * sizeof(int));
    
//     if (p->dados == NULL)
//         return;

//     p->topo = 0;    
// }

// int empilha (pilha *p, int x){
//     if (p->dados == NULL)
//         return 0;

//     if (p->topo == p->N){
//         p->dados = realloc(p->dados, 2 * p->N * sizeof(int));
//         if (p->dados == NULL)
//             return 0;
//         p->N *= 2; 
//     }

//     p->dados[p->topo] = x;
//     p->topo ++;

//     return 1;
// }

int desempilha (pilha *p, int *y){
    if (p->dados == NULL || p->topo == NULL)
        return 0;

    else {
        p->topo--;

        *y = p->dados[p->topo];
        //printf("val y : %d\n", *y);
    }
    return 1;

}

// int main(){

//     pilha *p;
//     int *y;

//     p = malloc(sizeof(pilha));

//     inicializa(p);
//     empilha(p, 1);
//     empilha(p, 2);
//     empilha(p, 3);

//     // for (int i = 0; i < p->topo; i++){
//     //     printf("%d\n", p->dados[i]);
//     // }

//     desempilha(p, y);

//     //printf("valor y: %d\n", *y);

//     for (int i = 0; i < p->topo; i++){
//         printf("%d\n", p->dados[i]);
//     }

    

//     return 0;
// }