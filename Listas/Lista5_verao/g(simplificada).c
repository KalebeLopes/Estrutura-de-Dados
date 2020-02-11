#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int enfileira (fila *f, int x){

    if (f->p == 0 && f->u == f->N - 1){
        f->N *= 2;
        f->dados = realloc(f->dados, f->N * sizeof(int));
        if (f->dados == NULL)
            return 0;
    }

    else if (f->p > f->u){
        if (f->u <= f->N - f->p){
            f->dados = realloc(f->dados, 2 * f->N * sizeof(int));
            if (f->dados == NULL)
                return 0;
            
            int i, j;
            for(i = 0, j = f->N; i < f->u; i++, j++){
                f->dados[j] = f->dados[i];
            }

            f->u = j;
            f->N *= 2;
        }

        else {
            f->dados = realloc(f->dados, 2 * f->N * sizeof(int));
            if (f->dados == NULL)
                return 0;
            
            int i, j;
            for (i = f->N - 1, j = f->N * 2-1; i >= f->p; i--, j--){
                f->dados[j] = f->dados[i];
            }
            f->p = j+1;
            f->N *= 2;
        }
    }

    f->dados[f->u] = x;
    f->u++;

    if (f->u == f->N)
        f->u %= f->N;

    return 1;
}

int main(){

    fila *f;

    f = malloc(sizeof(fila));

    f->N = 5;
    f->dados = malloc(f->N * sizeof(int));
    if (f->dados == NULL)
        return 0;
    f->p = f->u = 4; 

    enfileira (f, 1);
    enfileira (f, 2);
    enfileira (f, 3);
    enfileira (f, 4);
    enfileira (f, 5);
    enfileira (f, 6);

    if (f->p <= f->u){
        for (int i = f->p; i < f->u; i++)
            printf("%d ", f->dados[i]);
        printf("\n");
    }

    
    if (f->p > f->u){
        int i = f->p % f->N;;

        while (i != f->u){

            i = i% f->N;
            printf("%d ",  f->dados[i]);    
            i++;
            
        }

        printf("\n");
    }

    return 0;
}