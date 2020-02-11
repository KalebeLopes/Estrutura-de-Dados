#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int inicia(fila *f){
    if (f == NULL){
        return 1;
    }

    f->N = 5;
    f->dados = malloc(f->N * sizeof(int));
    f->p = f->u = 0;

    return 1;
}

int enfileira (fila *f, int x){
    if (f->dados == NULL)
        return 0;

    if (f->u == f->N){
        //printf("realoquei");
        f->N *= 2;
        f->dados = realloc(f->dados, f->N * sizeof(int));

        if (f->dados == NULL)
            return 0;

    }

    f->dados[f->u] = x;
    f->u++;

    return 1;
}

int desenfileira (fila *f, int *y){
    if (f->p == f->u || f->dados == NULL)
        return 0;
    
    *y = f->dados[f->p];
    f->p++;

    return 1;
    
}

int main(){

    fila *f;
    int *y, x;
    
    f = malloc(sizeof(fila));
    y = &x;

    inicia(f);
    enfileira (f, 1);
    enfileira (f, 2);
    enfileira (f, 3);
    desenfileira(f, y);
    enfileira (f, 4);
    enfileira (f, 5);
    enfileira (f, 6);

    for (int i = f->p; i < f->u; i++)
        printf("%d ", f->dados[i]);
    printf("\n");

    return 0;

}