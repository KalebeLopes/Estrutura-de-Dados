#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

// int enfileira (fila *f, int x){
//     if (f->dados == NULL)
//         return 0;

//     if (f->u == f->N){
//         f->N *= 2;
//         f->dados = realloc(f->dados, f->N * sizeof(int));

//         if (f->dados == NULL)
//             return 0;

//     }

//     f->dados[f->u] = x;
//     f->u++;

//     return 1;
// }

int desenfileira (fila *f, int *y){
    if (f->p == f->u || f->dados == NULL)
        return 0;
    
    *y = f->dados[f->p];
    f->p++;

    return 1;
    
}

// int main(){

//     fila *f;
//     int *y, x;

//     y = &x;


//     f = malloc(sizeof(fila));

//     f->N = 5;
//     f->dados = malloc(f->N * sizeof(int));
//     f->p = f->u = 0;
 
//     enfileira (f, 1);
//     enfileira (f, 2);
//     enfileira (f, 3);
//     desenfileira (f, y);

//     for (int i = f->p; i < f->u; i++)
//         printf("%d ", f->dados[i]);
    
//     printf("\n");
//     printf("Retirado: %d\n", *y);

//     return 0;

// }