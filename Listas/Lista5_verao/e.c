#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira (fila *f, int x){
    if (f->dados == NULL)
        return 0;

    if (f->u == f->N){
        f->N *= 2;
        f->dados = realloc(f->dados, f->N * sizeof(int));

        if (f->dados == NULL)
            return 0;

    }

    f->dados[f->u] = x;
    f->u++;

    return 1;
}

// int main(){

//     fila *f;
//     f = malloc(sizeof(fila));

//     f->N = 5;
//     f->dados = malloc(f->N * sizeof(int));
//     f->p = f->u = 0;
 
//     enfileira (f, 1);
//     enfileira (f, 2);
//     enfileira (f, 3);

//     for (int i = 0; i < f->u; i++)
//         printf("%d ", f->dados[i]);

//     return 0;

// }